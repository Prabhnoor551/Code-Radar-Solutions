#include <stdio.h>
#include<string.h>
int main() 
{
    char str[];
    int x;

    scanf("%c", &str);
    
    x= strlen(str);

    printf("%d", x);
    return 0;
}