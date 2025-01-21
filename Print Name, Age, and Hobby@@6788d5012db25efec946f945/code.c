#include <stdio.h>
int main(){
    int a;
    char str1[50],str2[50];
    scanf("%d",&a);
    scanf("%s %s",str1,str2);
    printf("Name: %s",str1);
    printf("Age: %d",a);
    printf("Hobby: %s",str2);

    return 0;
}