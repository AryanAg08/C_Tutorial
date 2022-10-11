#include<stdio.h>

int main () {
    int numA;
    int numB;
    printf("Please enter first value \n");
    scanf("%d", &numA);
    printf("Please enter second value \n");
    scanf("%d", &numB);
    
    printf("The value of first number is %d \n", numA + numB - numA);
    printf("The value of second number is %d \n", numA - numB + numB);
    
    return 0;
}
