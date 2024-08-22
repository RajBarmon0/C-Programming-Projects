#include <stdio.h>

// Function to check if the given sides form a valid triangle
int isValidTriangle(int a, int b, int c) {
    // Check the triangle inequality theorem
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int side1, side2, side3;

    // Prompt the user to enter the sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    // Check if the entered sides form a valid triangle
    if (isValidTriangle(side1, side2, side3)) {
        printf("The triangle with sides %d, %d, and %d is valid.\n", side1, side2, side3);
    } else {
        printf("The triangle with sides %d, %d, and %d is not valid.\n", side1, side2, side3);
    }

    return 0;
}