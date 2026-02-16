#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


size_t *find_capitals (const char *word, size_t *uppercase_count)
{
  *uppercase_count = 0;
// report the number of uppercase letters through the
// 'uppercase_count' pointer:
  for (int i = 0; word[i] != '\0'; i++){
        if (isupper(word[i])){
        (*uppercase_count)++;
        }
  }
  
  size_t *res = malloc(*uppercase_count * sizeof(size_t));
  
  int res_idx = 0;
  for (int i = 0; word[i] != '\0'; i++){
        
        if (isupper(word[i])){
            res[res_idx]  = i;
            res_idx++;
        }
  }
// return a free-able pointer:
  return res;
}

int g = 0;

int fib(int n){
    g+= 1;
    printf("%d\n", g);

    if (n <= 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    else return fib(n-1) + fib(n-2);
    
    
}
  


int main(int argc, char const *argv[])
{
    /*size_t *count_p;
    size_t *arr;

    size_t count = 6;
    count_p = &count;

    arr = find_capitals("CodEWaRs", count_p);

    
    for (size_t i = 0; i < *count_p; i++)
    {
        printf("%d\n", arr[i]);
    }*/

   fib(9);
    

    return 0;
}
