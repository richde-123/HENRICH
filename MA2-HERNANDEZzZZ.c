#include <stdio.h>
 int main() {

int num1, num2, num3;

    printf("Enter an Integer number: ");
    scanf("%d", &num1);

    printf("Enter an Integer number: ");
    scanf("%d", &num2);

    printf("Enter an Integer number: ");
    scanf("%d", &num3);

    if(num1 >= num2 && num1 >= num3){
        printf("%d is the highest integer number\n", num1);
    }else if(num2 >= num1 && num2 >= num3){
        printf("%d is the highest integer number\n", num2);
    }else{
        printf("%d is the highest integer number\n", num3);
    }

return 0;
}
