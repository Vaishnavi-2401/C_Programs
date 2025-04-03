#include<stdio.h>
#include<string.h>

void rev(char s[])
{
    int start = 0;
    int end = strlen(s) - 1;
    char temp;

    while(start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char s[100];

    printf("Enter the String : ");

    fgets(s, sizeof(s), stdin);

    size_t len = strlen(s);

    if(s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
    }

    rev(s);

    printf("Reversed String : %s\n", s);

    return 0;

}