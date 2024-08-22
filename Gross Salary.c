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