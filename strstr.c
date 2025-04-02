#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Hello World";
    char s2[] = "World";

    char *res = strstr(s1, s2);

    if(res != NULL)
    {
        printf("Substring Found at Position : %d\n", res - s1);
    }
    else
    {
        printf("Substring Not Found!\n");
    }

    return 0;
    
}