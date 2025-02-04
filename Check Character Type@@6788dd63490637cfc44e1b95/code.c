#include <ctype.h>
int main() 
{
    char ch;
    scanf("%c",&ch);

    if (isalpha(ch))
    {
     
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
           printf("Vowel",ch);
        }
        else
        {
            printf("Consonant",ch);
        }
    }
    else if(isdigit(ch))
    {
        printf("Digit",ch);
    }
    else{
        printf("Special Character",ch);
    }
    return 0;
}