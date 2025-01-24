#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    if(s<=1){
        printf("Not Prime");
    }
    if(int i=2;i<=50;i++){
        if(s%i==0){
            printf("prime");
        }
    }
    return 0;
}