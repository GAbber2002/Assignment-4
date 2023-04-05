#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the range for the table of 5: ");
    scanf("%d", &n); // Read input from user

    printf("Table of 5 up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    return 0;
}

