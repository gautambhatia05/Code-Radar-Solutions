#include <stdio.h>
int main(){
    int a;
    char str1[50],str2[50];
    scanf("%d",&a);
    scanf("%s %s",str1,str2);
    printf("Name: %49s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %49s\n",str2);

    return 0;
}