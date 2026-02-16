  #include <stdio.h>

  int main(int argc, char const *argv[])
  {
    //Enter dolar amount
    int amount = 0;

    printf("Enter dolar amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %d\n", amount / 20);

    amount = amount % 20;

    printf("$10 bills: %d\n", amount / 10);

    amount = amount % 10;

    printf("$15 bills: %d\n", amount / 5);

    amount = amount % 5;

    printf("$10 bills: %d\n", amount / 1);


    return 0;
  }
  