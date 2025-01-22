#include <stdio.h>
int main() 
{
    char str[100];
    int age;
    char str1[100];

    scanf("%s %d %s", &str,&age,&str1);

    printf("Name: %s\n", str);
    printf("Age: %d\n", age);
    printf("Hobby: %s", str1);

    return 0;
}