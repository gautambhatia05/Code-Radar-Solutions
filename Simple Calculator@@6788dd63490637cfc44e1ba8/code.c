#include <stdio.h>
int main(){
    float a,b
    int x;
    char choice;
    scanf("%f %f %c",&a,&b,&choice);
        switch(choice)
        {
        case'+':
        x = a+b;
        printf("%d\n",x);
        break;
        case'-':
        if(a<b){
            x=a-b;
            printf("%d\n",x);
        }else
        {
            c=b-a;
            printf("%d\n",x);
        }
        break;
        printf("%d\n",x);
        break;
        case'*':
        x = (a*b);
        printf("%d\n",x);
        break;
        case'/':
        x = a/b;
        printf("%d\n",x);
        break;
        default:
        printf("error\n");
        
    }
    return 0;
}