#include <stdio.h>
int main(){
    int a,b,x;
    char choice;
    scanf("%d %d %c",&a,&b,&x);
    switch (choice){
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
        printf("%d",x);
        break;
        
    }
    return 0;
}