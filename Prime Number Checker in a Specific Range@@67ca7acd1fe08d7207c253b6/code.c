#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; 
    }
    return 0; 
}

int main() {
    int start, end;
    
    
    scanf("%d", &start);
    
    scanf("%d", &end);
    
    printf("Prime numbers between %d and %d are: ", start, end);
   
    
    return 0
}

void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
