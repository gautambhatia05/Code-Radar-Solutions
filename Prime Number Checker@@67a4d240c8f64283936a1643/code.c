#include <stdio.h>

int isPrime(int n);

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    
    return 0;
}

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  // If divisible, not prime
    }
    return 1;  // Prime number
}
