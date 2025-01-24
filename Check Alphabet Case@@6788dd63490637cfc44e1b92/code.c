#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c>='A'&&c<='Z'){
        printf("Uppercase");
    }else if(c>='a'&&c<='b'){
        printf("Lowercase");
    }else
    printf("Not");
    return 0;
}