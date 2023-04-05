
#include <stdio.h>

int main()
{
    int i;

    printf("The cubes of the first 10 natural numbers are: ");
    for (i = 1; i <= 10; i++)
        {
        printf("%d ", i * i * i);
        }
    printf("\n");

    return 0;
}
