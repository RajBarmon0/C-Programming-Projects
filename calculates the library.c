#include <stdio.h>

int main() {
    int daysLate;
    int fine;

    // Prompt the user for input
    printf("Enter the number of days late to return the book: ");
    scanf("%d", &daysLate);

    // Determine the fine based on the number of days late
    if (daysLate <= 0) {
        printf("The book is returned on time or before.\n");
    } else if (daysLate <= 5) {
        fine = 500;
        printf("The fine is %d taka.\n", fine);
    } else if (daysLate <= 10) {
        fine = 1000;
        printf("The fine is %d taka.\n", fine);
    } else if (daysLate <= 30) {
        fine = 1500;
        printf("The fine is %d taka.\n", fine);
    } else {
        printf("Membership cancelled due to late return exceeding 30 days.\n");
    }

    return 0;
}