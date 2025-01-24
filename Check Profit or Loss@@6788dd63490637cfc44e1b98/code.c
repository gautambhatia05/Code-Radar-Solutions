#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=b){
        printf("Loss");
    }else if(a<=b){
        printf("profit");
    }else
    printf("No Profit No Loss");
    return 0;
}