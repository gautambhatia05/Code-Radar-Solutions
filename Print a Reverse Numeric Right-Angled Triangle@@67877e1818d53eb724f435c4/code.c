#include <stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    for(int i=1;i<=s;i++){
        for(int j=1;j<=s;j++){
        printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}