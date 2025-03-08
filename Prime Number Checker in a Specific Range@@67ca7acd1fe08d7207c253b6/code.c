#include<stdio.h>
int isprime(int prime);

int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime number
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
   printf();

    return 0;
}


    void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}