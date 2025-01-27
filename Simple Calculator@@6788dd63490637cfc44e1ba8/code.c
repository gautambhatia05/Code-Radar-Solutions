#include <stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d %d %c",&a,&b,&x);
    switch (x){
        case '+':
        x = a+b;
        printf("%d",x);
        break;
        case '-':
        x = a-b;
        printf("%d",x);
        break;
        case '*':
        x = a*b;
        printf("%d",x);
        break;
        case '/':
        x = a/b;
        printf("%f",x);
        break;
        default:
        printf("error");
        break;
    }
    return 0;
}