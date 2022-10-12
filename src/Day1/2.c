#include <stdio.h>

int main () {
    int numA;
    int numB;
    printf("Please enter first number \n");
    scanf("%d", &numA);
    printf("Please enter second Number \n");
    scanf("%d", &numB);

    int answer = numA + numB;

    printf("The sum of both numbers is %d", answer);
}
