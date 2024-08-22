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