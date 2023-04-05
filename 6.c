#include <stdio.h>

int main()
{
    int i;
    int count = 0;

    printf("The first 10 even natural numbers are: ");
    for (i = 2; count < 10; i += 2)
        {
        printf("%d ", i);
        count++;
        }
    printf("\n");

    return 0;
}
