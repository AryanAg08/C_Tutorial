#include <stdio.h>


float calculateSum(int prices[], int quantities[], int size) {
float sum = 0;
for (int i = 0; i < size; i++) {
sum += prices[i] * quantities[i];
}
return sum;
}


float calculateDiscount(float total) {
if (total < 1000) {
return 0.05 * total;
} else if (total < 5000) {
return 0.1 * total;
} else {
return 0.15 * total;
}
}

void printReceipt(int prices[], int quantities[], int size) {
float sum = calculateSum(prices, quantities, size);
float discount = calculateDiscount(sum);
float finalPrice = sum - discount;

printf("Item Prices:\n");
for (int i = 0; i < size; i++) {
printf("%d x %d = %d\n", quantities[i], prices[i], prices[i] * quantities[i]);
}
printf("Total: %.2f\n", sum);
printf("Discount: %.2f\n", discount);
printf("Final price: %.2f\n", finalPrice);
}

int main() {
int prices[3];
int quantities[3];
for (int i =0; i <3; i++) {
    printf("Enter item %d price: ", i+1);
    scanf("%d", &prices[i]);
}
printf("\n");
for (int j = 0; j<3; j++) {
    printf("Enter the quantity of item %d:  ", j+1);
    scanf("%d", &quantities[j]);
}

printReceipt(prices, quantities, 3);
return 0;
}

