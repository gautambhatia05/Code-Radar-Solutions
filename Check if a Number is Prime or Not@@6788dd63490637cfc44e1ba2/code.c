#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    if(s<=1){
        printf("Not Prime");
    }else
    for(int i=2;i<=2;i++){
        if(s%i==0){
            printf("Prime");
        }
    }else
    printf("Not Prime");
    return 0;
}