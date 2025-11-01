#include <stdio.h>

int main() {
    int count, start, end, evenCount, oddCount;


    // 1. Ask the user for input
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // 2. Use a for loop to display numbers and identify odd/even
    for(count = start; count <= end; count++) {
        if(count % 2 == 0) {
            printf("%d is Even\n", count);
            evenCount++;
        } else {
            printf("%d is Odd\n", count);
            oddCount++;
        }
    }

    // 3. Display total counts
    printf("\nTotal Even numbers: %d\n", evenCount);
    printf("Total Odd numbers: %d\n", oddCount);

    return 0;
}
