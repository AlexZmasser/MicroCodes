#include <stdio.h>


int main ()
{
    int numbers = 12;
    int *prt = numbers;

    printf("%d \n", prt);
    printf("%p \n", prt);
    return 0;
}