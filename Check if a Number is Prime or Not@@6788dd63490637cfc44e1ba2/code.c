#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=1){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            printf("Prime\n");
        }else
        printf("Not prime")
    }
    
    return 0;
}