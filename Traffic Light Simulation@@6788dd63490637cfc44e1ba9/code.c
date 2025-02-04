#include <stdio.h>
int main() 
{
    char alphabet;

    scanf("%c",&alphabet);

    switch(alphabet)
    {
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
    } 
    return 0;
}