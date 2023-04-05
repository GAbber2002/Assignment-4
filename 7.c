#include <stdio.h>


int main()

{
    int i;
    int count = 0;

    printf("The first 10 even natural numbers in reverse order are: ");
    for (i = 20; count < 10; i -= 2)
        {
        printf("%d ", i);
        count++;
        }
    printf("\n");

    return 0;
}

