#include <stdio.h>
int main() 
{
    char str[100];
    int x;

    scanf("%c", &str);
    
    x= strlen(str);

    printf("%d", x );
    return 0;
}