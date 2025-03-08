#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible, it's not prime
    }
    return 1; // Otherwise, it's prime
}


int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--) {
        int num;
        scanf("%d", &num); // Read each number
        printf("%d\n", isPrime(num)); // Print result using isPrime function
    }

    return 0;
}
