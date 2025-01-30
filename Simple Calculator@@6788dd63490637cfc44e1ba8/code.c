#include <stdio.h>
int main(){
    float a,b
    int x;
    char choice;
    scanf("%f%f%c",&a,&b,&choice);
        switch(choice){
        case'+':
        x = a+b;
        printf("%d",x);
        break;
        case'-':
        if(a<b){
            x=a-b;
            printf("%d",x);
        }else
        {
            c=b-a;
            printf("%d",x);
        }
        break;
        printf("%d",x);
        break;
        case'*':
        x = (a*b);
        printf("%d",x);
        break;
        case'/':
        x = a/b;
        printf("%d",x);
        break;
        default:
        printf("error");
        
    }
}