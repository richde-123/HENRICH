#include <stdio.h>

int main () {

    int num1, num2, sum;
    char operator;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number: ");
    scanf("%d", &num2);

    printf("Enter an operator: +, -, *, /, or %%: ");
    scanf(" %c", &operator);

    switch(operator){
    case '+':
        sum = num1 + num2;
        printf("Result: %d + %d = %d",num1, num2, sum);
    break;

    case '-':
        sum = num2 - num1;
        printf("Result: %d - %d = %d",num2, num1, sum);
    break;

    case '*':
        sum = num1 * num2;
        printf("Result: %d * %d = %d",num1, num2, sum);
    break;

    case '/':
        if (num2 == 0)
            printf("Division by zero\n");
        else
            printf("Result: %d\n", num1 / num2);
        break;
    case '%':
        if (num2 == 0)
            printf("Division by zero\n");
        else
            printf("Result: %d\n", num1 % num2);
        break;

    default:
        printf("Invalid Operator");

return 0;


    }





}
