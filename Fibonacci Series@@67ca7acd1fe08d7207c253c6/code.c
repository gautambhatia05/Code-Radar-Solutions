#include <stdio.h>

// Corrected function definition
void fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    if (n <= 0) {
        printf("Invalid input\n");
        return; // No need to return 0
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    
    // Read input
    scanf("%d", &n);
    
    // Call the correct function
    fibonacciSeries(n);

    return 0;
}
