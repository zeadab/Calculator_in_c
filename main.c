#include <stdio.h>

int main(void)
{
    double num1 ;
    double num2 ;
    char operator = '\0';
    double result;

    printf("Enter the first number please: ");
    scanf("%lf", &num1);

    printf("which Operator (+,*,-;/)? ");
    scanf(" %c", &operator);

    printf("Enter the second number please: ");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;
        case '*': result = num1 * num2;
        break;
        case '/':
        if (num2==0)
        {
            printf("you cant devide by 0 !!!");
        }else result = num1 / num2;
        break;
        default: printf("Invalid Operator");
    }
    printf("The result is: %lf", result);
    return 0;
}