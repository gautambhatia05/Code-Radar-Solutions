#include <stdio.h>
int main(){
    int n;
    float result;
    scanf("%f",&n);
    if(n%4==0){
        printf("Not a Leap Year\n");
    }else
    printf("Leap Year\n");
    return 0;
}