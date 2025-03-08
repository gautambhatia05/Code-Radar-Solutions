#include <stdio.h>

int main() {
    int n, i, j, space;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (space = 1; space <= n - i; space++) {
            printf("");
        }

        // Print increasing letters
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print decreasing letters
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
