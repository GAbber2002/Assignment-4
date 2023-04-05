#include <stdio.h>

int main()
{
    int i;
    int count = 0;

    printf("The first 10 odd natural numbers in reverse order are: ");
    for (i = 19; count < 10; i -= 2) {
        printf("%d ", i);
        count++;
    }
    printf("\n");

    return 0;
}
