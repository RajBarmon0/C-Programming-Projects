# C-Programming-Projects

## Projects 1

 <h1>If an employee's salary is input through the keyboard write a program to find his gross salary as per the following company policy.</h1>

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

<h1>Below is a simple C program that calculates the library fine based on the number of days a book is returned late. The program takes the number of late days as input and displays the appropriate fine or a message indicating membership cancellation if the book is returned after 30 days.</h1>




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


<h1>To determine if a triangle is valid based on its side lengths, you need to check if the sum of any two sides is greater than the third side. This is known as the triangle inequality theorem</h1>

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

## Projects 4

**To implement the company's policy for processing customer orders, you need to consider three
scenarios based on the quantity in stock and the customer's credit status. The C program below
handles these scenarios:**

1. If the customer's order can be fulfilled with the stock available and their credit is OK,
process the full order.
2. If the customer's credit is not OK, do not fulfill the order and send an intimation message.
3. If the customer's credit is OK but the stock is insufficient to fulfill the entire order, supply
what is in stock and send an intimation message about the balance.

**Code:**
```bash
  #include <stdio.h>

int main() {
    int stock, order;
    char creditStatus;

    // Input the stock and order details
    printf("Enter the quantity in stock: ");
    scanf("%d", &stock);
    
    printf("Enter the quantity of the order: ");
    scanf("%d", &order);
    
    // Input the credit status
    printf("Is the customer's credit OK? (Y/N): ");
    scanf(" %c", &creditStatus);  // Note the space before %c to consume any newline characters

    // Process the order based on the rules
    if (creditStatus == 'Y' || creditStatus == 'y') {
        if (order <= stock) {
            // Case 1: Order can be fully fulfilled
            printf("Order processed successfully. Supply: %d\n", order);
        } else {
            // Case 3: Stock is less than order
            printf("Order processed partially. Supply: %d\n", stock);
            printf("Intimation: %d items will be shipped later.\n", order - stock);
        }
    } else {
        // Case 2: Credit is not OK
        printf("Order cannot be processed. Intimation: Credit status not OK.\n");
    }

    return 0;
}
```

