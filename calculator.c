#include<stdio.h>

int main()
{
    char op;
    double n1, n2, res;

    printf("Enter an Operator (+, -, *, /) : \n");
    scanf("%c", &op);

    printf("Enter the two Numbers : \n");
    scanf("%lf %lf", &n1, &n2);

    switch(op)
    {
        case '+':
                res = n1 + n2;
                break;

        case '-':
                res = n1 - n2;
                break;

        case '*':
                res = n1 * n2;
                break;

        case '/':
                if(n2 != 0)
                {
                    res = n1 / n2;
                }
                else
                {
                    printf("Error! Division by zero is not possible!\n");
                    return 1;
                    break;
                
                default :
                    printf("Invalid Input!\n");
                    return 1;
                }
                
    }

    printf("Result : %.2lf %c %.2lf = %.2lf",n1, op, n2, res);
    
    return 0;

}