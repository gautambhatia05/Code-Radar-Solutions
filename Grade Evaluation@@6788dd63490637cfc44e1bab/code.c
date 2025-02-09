#include <stdio.h>
int main(){
    char a,c;
    scanf("%c,%c",&a,&c);
    switch (c){
        case'A':
        printf("Excellent\n");
        break;
        case'B':
        printf("Good\n");
        break;
        case'C':
        printf("Average\n");
        break;
        case'D':
        printf("Below Average\n");
        break;
        case'F':
        printf("Fail\n");
        break;
    }
    return 0;
}