#include <stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d %d",&a,&b);
    scanf("%c",&x);
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