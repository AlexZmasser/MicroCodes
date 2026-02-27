#include <stdio.h>

int main (){
    printf("Hello World !\n");
    int i = 0;
    for (i=0;i<6;i++)
    {
        if (i%2)
        {
            printf("%d", i);
        }        
    }

    return 0;
}