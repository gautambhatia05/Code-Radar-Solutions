#include <stdio.h>
int main(){
    char RGY;
    scanf(" %c", &RGY);
    switch (RGY) {
        case 'R':
        printf("Stop\n");
        break;
        case 'G':
        printf("Go\n");
        break;
        case 'Y':
        printf("Slow Down\n");
        break;
        default:
        printf("Invalid input\n");
        break;
         }
    return 0;
}