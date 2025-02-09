#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='0'&& ch<='9'){
        printf("Digit\n");
    }else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
      
           printf("Vowel\n");
         else {
            printf("Consonant\n");
        }
    }
    else {
        printf("Special Character");
    }

    return 0;
}