#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_DISPLAY_LENGTH 8
#define MAX_STACK_SIZE 2

// Display abstraction in C.
typedef struct {
    char buffer[MAX_DISPLAY_LENGTH + 1];
    int clearNext;
} Display;

double getValue(Display *d) {
    return atof(d->buffer);
}

void setValue(Display *d, double value) {
    // Format the value using at most 8 significant digits.
    snprintf(d->buffer, sizeof(d->buffer), "%.8g", value);
}

void append(Display *d, char c) {
    if (strlen(d->buffer) < MAX_DISPLAY_LENGTH) {
        int len = strlen(d->buffer);
        d->buffer[len] = c;
        d->buffer[len + 1] = '\0';
    }
}

void clearDisplay(Display *d) {
    d->buffer[0] = '\0';
}

int isFull(Display *d) {
    return strlen(d->buffer) >= MAX_DISPLAY_LENGTH;
}

int isInvalid(Display *d) {
    // Here we consider an empty buffer (or one that converts to zero) as invalid.
    return (strlen(d->buffer) == 0 || getValue(d) == 0.0);
}

// Stack implementation for operations.
typedef struct {
    double numbers[MAX_STACK_SIZE];
    char operators[MAX_STACK_SIZE];
    int numCount;
    int opCount;
} Stack;

void initStack(Stack *s) {
    s->numCount = 0;
    s->opCount = 0;
}

void push_number(Stack *s, double n) {
    if (s->numCount < MAX_STACK_SIZE) {
        s->numbers[s->numCount++] = n;
    }
}

void push_operator(Stack *s, char op) {
    if (s->opCount < MAX_STACK_SIZE) {
        s->operators[s->opCount++] = op;
    }
}

int isStackFull(Stack *s) {
    return s->numCount >= MAX_STACK_SIZE;
}

double operate(Stack *s) {
    if (s->numCount < 2 || s->opCount < 1) {
        return 0;  // Not enough data to operate.
    }
    double b = s->numbers[--s->numCount];
    double a = s->numbers[--s->numCount];
    char op = s->operators[--s->opCount];
    double result = 0.0;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero.\n");
                result = 0.0;
            } else {
                result = a / b;
            }
            break;
        default:
            break;
    }
    return result;
}

int main() {
    Display display;
    clearDisplay(&display);
    display.clearNext = 0;
    
    Stack stack;
    initStack(&stack);

    printf("Simple Calculator (enter digits, operators + - * /, '=' to calculate, 'q' to quit)\n");
    printf("Current display: %s\n", display.buffer);

    int c;
    while ((c = getchar()) != EOF) {
        if (c == 'q') break;
        
        if (isdigit(c) || c == '.') {
            // If the display is considered invalid or we need to clear it, do so.
            if (isInvalid(&display) || display.clearNext) {
                clearDisplay(&display);
                display.clearNext = 0;
            }
            if (!isFull(&display)) {
                append(&display, c);
            }
            printf("Display: %s\n", display.buffer);
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            // When an operator is pressed, push the current number.
            push_number(&stack, getValue(&display));
            if (isStackFull(&stack)) {
                double intermediate = operate(&stack);
                // Push the result back for chaining operations.
                push_number(&stack, intermediate);
                setValue(&display, intermediate);
                printf("Display (intermediate): %s\n", display.buffer);
            }
            push_operator(&stack, c);
            display.clearNext = 1;
        } else if (c == '=' || c == '\n') {
            // When '=' or newline is encountered, push the last number and compute.
            push_number(&stack, getValue(&display));
            double result = operate(&stack);
            setValue(&display, result);
            display.clearNext = 1;
            printf("Result: %s\n", display.buffer);
            // Clear the stack for a new calculation.
            initStack(&stack);
        }
        // Discard any extra whitespace.
    }

    return 0;
}
