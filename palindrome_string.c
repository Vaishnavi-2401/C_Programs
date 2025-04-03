#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], rev[100];
    int i, len, palindrome = 1;

    printf("Enter the String : \n");
    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len; i++)
    {
        rev[i] = s[len - i - 1];
    }
    
    rev[len] = '\0';

    for(i = 0; i < len; i++)
    {
        if(s[i] != rev[i])
        {
            palindrome = 0;
            
            break;
        }
    }

    if(palindrome)
    {
        printf("%s is a Palindrome!\n", s);
    }
    else
    {
        printf("%s is not a Palindrome!\n", s);
    }

    return 0;

}