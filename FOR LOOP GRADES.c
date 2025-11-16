#include <stdio.h>

int main()
{
    int i, quiz = 8, highest = 0, lowest = 0, total = 0, passed = 0, failed = 0, score = 0, pass = 0, fail = 0;
    float average = 0;

    for(i = 1; i <= quiz; i++){
    printf("Enter score for quiz %d: ", i);
    scanf("%d", &score);
    total+=score;

    if(i == 1){
        highest = score;
        lowest = score;

    }
    if(score > highest){
        highest = score;
    }
    if(score < lowest){
        lowest = score;
    }
     if(score >= 75)
        pass++;
    else
        fail++;
    }
    average = (float)total / quiz;
    printf("Total score: %d\n", total);
    printf("Average score: %.2f\n", average);
    printf("Highest score: %d\n", highest);
    printf("Lowest score: %d\n", lowest);
    printf("Number of quizzes passed: %d\n", pass);
    printf("Number of quizzes failed: %d\n", fail);
    return 0;
}
