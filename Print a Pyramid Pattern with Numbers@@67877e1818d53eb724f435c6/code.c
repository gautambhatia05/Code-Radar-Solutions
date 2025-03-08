#include <stdio.h>

int main() {
    int n;
 scanf("%d",&n);
    // Outer loop to print all rows
    for (int i = 0; i < n; i++) {

        // First inner loop to print leading white spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");

        // Second inner loop to print star * character
        for (int k = 0; k < 2 * i + 1; k++)
            printf("%d ",k);
        printf("\n");
    }
    return 0;
}

