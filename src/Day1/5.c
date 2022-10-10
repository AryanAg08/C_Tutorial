#include<stdio.h>

int main () {
    int numA;
    int numB;
    printf("Please enter dividend \n");
    scanf("%d", &numA);
    printf("Please enter divisor\n");
    scanf("%d", &numB);
    
    while (numB < 1) {
        printf("Please enter the second number greater than 0 \n");
        scanf("%d", &numB);
    }

    int reminder = numA % numB;
    int quotient = numA / numB;

    printf("The reminder is %d \n", reminder);
    printf("The quotient is %d \n", quotient);
    
    return 0;
}
