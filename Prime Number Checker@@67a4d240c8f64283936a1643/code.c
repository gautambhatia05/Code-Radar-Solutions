#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n == 1) return 0; // 1 is not prime
    if (n == 2) return 1; // 2 is prime
    if (n % 2 == 0) return 0; // Even numbers > 2 are not prime

    for (int i = 3; i * i <= n; i += 2) { // Check odd numbers only
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    
    return 0;
}
