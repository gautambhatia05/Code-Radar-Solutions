#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    for(int i=1;i<=s;i++){
        for(int j=1;j<=i;i++){
            printf("*");
        }
    }
    return 0;
}