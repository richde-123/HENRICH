#include <stdio.h>

int main() {
    int age, registration, total_fee, method;
    const int barangay_ballot = 20, sk_ballot = 10;

    //AGE//
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 1 || age > 125) {
        printf("Invalid Age\n");
    return 0;//para ma stop ang program kung invalid ang age//

    } else if (age < 15) {
        printf("Not qualified to vote.\n");

    return 0;//also this//
    }

    //REGISTER OR NOT REGISTER//
    printf("Are you a registered voter? (1 - Registered, 0 - Not Registered): ");
    scanf("%d", &registration);

    if (registration == 0) {
        printf("Not qualified to vote. Please register first. No payment required.\n");
        return 0;//also here para mostop ang program if dili siya registered//
    }

    //BALLOT//
    if (age >= 15 && age <= 17) {
        total_fee = sk_ballot;
        printf("You're qualified to vote.\nBallot Received: 1 ballot for SK\n");
    } else if (age >= 18 && age <= 30) {
        total_fee = barangay_ballot + sk_ballot;
        printf("You're qualified to vote.\nBallot Received: 2 ballots for Barangay and SK\n");
    } else if (age >= 31 && age <= 125) {
        total_fee = barangay_ballot;
        printf("You're qualified to vote.\nBallot Received: 1 ballot for Barangay\n");
    }

    //ONLINE OR IN-PERSON//
    printf("1.IN-PERSON\n2.ONLINE\n");
    printf("Choose a Voting Method: ");
    scanf("%d", &method);

    if (method == 2) {

        const int discount = 5;//DISCOUNTFEE//
        total_fee -= discount;
        printf("Your total ballot fee is %d PHP\n", total_fee);
        printf("Please message your Barangay Office to receive your online voting link.\n");
    }
    else if (method == 1) {
    printf("Your total ballot fee is %d PHP\n", total_fee);

    if (age % 2 == 0) {
        printf("Since your age is even, your room assignment is ROOM M01\n");
    } else {
        printf("Since your age is odd, your room assignment is ROOM M02\n");
    }
}
else {
    printf("Invalid voting method.\n");

}
return 0;
}
