#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
