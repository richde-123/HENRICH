#include <stdio.h>

int main() {

    //VARIABLE DECLERATION//
int choice, hour_worked, hourly_rate;
float salary, overtime_pay, overtime_hours, basic_salary;
const int per_hours= 160;
const float regular_rate = 1.5, partime_rate = 1.25;

printf("1. Regular\n2. Contractual\n3. Part-time\n");

printf("Enter your Choice (1-3): ");
scanf("%d", &choice);

printf("Enter Total hours worked: ");
scanf("%d", &hour_worked);

printf("Enter Total hourly rate: ");
scanf("%d", &hourly_rate);

            //overtime//
if(hour_worked > per_hours) {
    overtime_hours = hour_worked - per_hours;
}else {
    overtime_hours = 0;
}
switch (choice) {
        //Regular case of my code//
    case 1: { //Regular case of my code//
        basic_salary = hour_worked * hourly_rate;

        if (hour_worked > per_hours) {
            overtime_pay = overtime_hours * (hourly_rate * regular_rate);
        } else {
            overtime_pay = 0;
        }
        salary = basic_salary + overtime_pay;
        printf("\nEmployee Type: Regular\n");
        break;
    }
        //Contractual line of my code//
    case 2: {
        basic_salary = hour_worked * hourly_rate;
        overtime_pay = 0;
        salary = basic_salary;
        printf("\nEmployee Type: Contractual\n");
        break;
    }
        //Part-time line of the code//
    case 3: {
        basic_salary = hour_worked * hourly_rate;
        if (hour_worked > per_hours) {
            overtime_pay = overtime_hours * (hourly_rate * partime_rate);
        } else {
            overtime_pay = 0;
        }
        salary = basic_salary + overtime_pay;
        printf("\nEmployee Type: Part-time\n");
        break;
    }

    default: {
        printf("\nInvalid Choice!\n");
        return 0;
    }
}
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Overtime Pay: %.2f\n", overtime_pay);
    printf("Total Salary: %.2f\n", salary);

            //condition//
    if (salary >= 150000){
        printf("Social class: Rich\n");
    }else if(salary >= 20000){
        printf("Social class: Middle Class\n");
    }else if(salary >= 10000){
        printf("Social class: Low Income\n");
    }else{
        printf("Social class: Poor\n");
    }
    return 0;
    }
