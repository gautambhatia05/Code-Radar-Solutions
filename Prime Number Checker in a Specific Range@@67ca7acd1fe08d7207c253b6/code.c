#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime number
}

// Function to print all prime numbers in a given range
void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    
    // Taking range input from user
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    
    // Print all primes in range
    printf("Prime numbers between %d and %d are: ", start, end);
    printPrimesInRange(start, end);
    
    return 0;
}
