#include<stdio.h>

int main () {
    int numA;
    int numB;
    printf("Please enter first number \n");
    scanf("%d", &numA);
    printf("Please enter second Number \n");
    scanf("%d", &numB);
    
    while (numB < 1) {
        printf("Please enter the second number greater than 0 \n");
        scanf("%d", &numB);
    }

    int sum = numA + numB;
    int sub = numA - numB;
    int multiply = numA * numB;
    int divide = numA / numB;
    int modulus = numA % numB;

    printf("The sum of both numbers is %d \n", sum);
    printf("The subtraction of both numbers in %d \n", sub);
    printf("The multiplication of both numbers is %d \n", multiply);
    printf("The divison of both numbers is %d \n", divide);
    printf("The reminder of both numbers is %d \n", modulus);
    
    return 0;
}
