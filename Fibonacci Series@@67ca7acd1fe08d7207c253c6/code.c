#include <stdio.h>


void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    printf();
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
    printf();
    scanf("%d", &n);
    fibonacci(n);  
    return 0;
}
