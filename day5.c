#include <stdio.h>


int main ()
{
    int numbers = 12;
    int *prt = numbers;

    printf("%d \n", prt+1);
    printf("%p \n", prt);
    return 0;
}