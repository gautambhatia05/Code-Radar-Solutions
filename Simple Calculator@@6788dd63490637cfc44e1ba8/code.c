#include <stdio.h>
int main(){
    float a,b,x;
    int choice;
    scanf("%d",&choice);
        switch (choice){
        case '+':
        x = a+b;
        printf("%f",x);
        break;
        case '-':
        x = a-b;
        printf("%f",x);
        break;
        case '*':
        x = a*b;
        printf("%f",x);
        break;
        case '/':
        x = a/b;
        printf("%f",x);
        break;
        
    }
}