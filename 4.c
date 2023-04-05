#include <stdio.h>

int main()
{
    int i;


    printf("The first 10 odd natural numbers are: ");
    for (i = 0; i< 20; i+2)
        {
        printf("%d ", i);
        i++;

        }
    printf("\n");

    return 0;
}

