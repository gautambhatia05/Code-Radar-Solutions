#include <stdio.h>
int main(){
    int a,b
    int x;
    char choice;
    if(scanf("%d %d %c",&a,&b,&choice)!=3){
        printf("Invalid input\n");
        return 1;
    }
        switch(choice)
        {
        case'+':
        x = a+b;
        printf("%d\n",x);
        break;
        case'-':    
        x=a-b;
        printf("%d\n",x);
        break;
        printf("%d\n",x);
        break;
        case'*':
        x = (a*b);
        printf("%d\n",x);
        break;
        case'/':
        if(b!=0){
            c=a/b;
            printf("%d",x);
        }else{
            printf("error\n");
            return 1;
        }
        break;
        default:
        printf("error\n");
        return 1;
        
    }
    return 0;
}