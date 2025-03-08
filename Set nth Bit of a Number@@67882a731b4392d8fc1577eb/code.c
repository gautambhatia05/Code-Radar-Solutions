#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);  
}

int main() {
    int num, n, result;

    
    scanf("%d", &num);


    scanf("%d", &n);

    result = setNthBit(num, n);
 return 0;
}
