#include <stdio.h>
int main(){
    int a,b;
    char choice;
    if(scanf("%d %d %c", &a, &b, &c)!=3){
        printf("Invalid input\n");
        return 1;
    }
    int x;
        switch(c)
        {
        case'+':
        x = a+b;
        printf("%d\n",x);
        break;
        case'-':    
        x=a-b;
        printf("%d\n",x);
        break;
        case'*':
        x = a*b;
        printf("%d\n",x);
        break;
        case'/':
        if(b!=0){
            x=a/b;
            printf("%d\n",x);
        }else{
            printf("error\n");
            return 1;
        }
        break;
        default:
        printf("Invalid operator\n");
        return 1;
        
    }
    return 0;
}