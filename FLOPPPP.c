#include <stdio.h>

int main()
{
    int i, total = 0, grade = 0, lowest = 0, highest = 0, subjects = 5;
    float average = 0;

    for(i = 1; i <= subjects; i++){
        printf("Enter grade for subject %d: ", i);
        scanf("%d", &grade);
        total+=grade;

        if(i == 1){
            lowest = grade;
        }
        if(grade > highest){
            highest = grade;
        }
        if(grade < lowest){
            lowest = grade;
        }
    }
        average = total / subjects;
        printf("Total grades: %d\n", total);
        printf("Average grade: %.2f\n", average);
        printf("Highest grade: %d\n", highest);
        printf("Lowest grade: %d", lowest);
    return 0;
}
