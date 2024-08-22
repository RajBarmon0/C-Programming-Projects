# C-Programming-Projects

## Projects 1
## If an employee's salary is input through the keyboard write a program to find his gross salary as per the following company policy.

1. If basic salary is less than Taka 25000, then House rent Allowance is 10% of basic salary and Dearness allowance is 70% of basic salary.

2. If basic salary is either equal to or above Taka 25000 but less than Taka 50000 then House rent Allowance is 15% and Dearness allowance is 80% of basic salary.

3. If basic salary is more than Taka 50000, then House rent Allowance is 20% of basic salary and Dearness allowance is 90% of basic salary. The gross salary is the sum of Basic salary, House rent Allowance and Dearness allowance

**code :**
```bash
  #include <stdio.h>

int main() {
    float basicSalary;
    float houseRentAllowance;
    float dearnessAllowance;
    float grossSalary;

    // Prompt user to input the basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Determine HRA and DA based on basic salary
    if (basicSalary < 25000) {
        houseRentAllowance = 0.10 * basicSalary;
        dearnessAllowance = 0.70 * basicSalary;
    } else if (basicSalary >= 25000 && basicSalary < 50000) {
        houseRentAllowance = 0.15 * basicSalary;
        dearnessAllowance = 0.80 * basicSalary;
    } else {
        houseRentAllowance = 0.20 * basicSalary;
        dearnessAllowance = 0.90 * basicSalary;
    }

    // Calculate gross salary
    grossSalary = basicSalary + houseRentAllowance + dearnessAllowance;

    // Print the results Raj Barmon
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("House Rent Allowance: %.2f\n", houseRentAllowance);
    printf("Dearness Allowance: %.2f\n", dearnessAllowance);
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
```

-------------------------------------------------------------------------------------------------------------------------------------


-------------------------------------------------------------------------------------------------------------------------------------
## Projects 2

## Below is a simple C program that calculates the library fine based on the number of days a book is returned late. The program takes the number of late days as input and displays the appropriate fine or a message indicating membership cancellation if the book is returned after 30 days.




**Code:**
```bash
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
```
   
**Explanation:**
  **Input Reading:**
    ○ The program prompts the user to enter the number of days the book is late using
scanf.

**Fine Calculation:**
○ The program uses a series of if-else statements to determine the fine based
on the number of late days:

- 0 or less days: No fine, the book is returned on time.
- 1 to 5 days: Fine is 500 taka.
- 6 to 10 days: Fine is 1000 taka.
- 11 to 30 days: Fine is 1500 taka.
- More than 30 days: Membership is canceled.

**Output:**
○ The program prints the appropriate message based on the input days.
You can compile and run this program using a C compiler to test its functionality.

-------------------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------------------
## Projects 3

## To determine if a triangle is valid based on its side lengths, you need to check if the sum of any two sides is greater than the third side. This is known as the triangle inequality theorem

**Explanation:**
1. Function isValidTriangle:
○ This function checks if the given side lengths satisfy the triangle inequality
theorem. It returns 1 (true) if the sides form a valid triangle and 0 (false)
otherwise.
2. User Input:
○ The main function prompts the user to enter the lengths of the three sides of the
triangle.
3. Validation Check:
○ The program uses the isValidTriangle function to check if the entered sides
form a valid triangle and prints the result accordingly.

**Code:**
```bash
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
```

