#include <stdio.h>
#include<math.h>
int main(){
    int s;
    scanf("%d",&s);
    if(s<=1){
        printf("Not Prime");
    }else
    for(int i=2;i<=sqrt(s);i++){
        if(s%i==0){
            printf("Not Prime");
        }
    }else
    printf("Prime");
    return 0;
}