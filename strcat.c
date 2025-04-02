#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50] = "Hello";
    char s2[] = "World";

    printf("Before Concatenation - ");

    printf("Str1 : %s   ", s1);
    printf("Str2 : %s\n", s2);

    strcat(s1, s2);

    printf("After Concatenation - ");

    printf("Str1 : %s\n", s1);

    return 0;

}