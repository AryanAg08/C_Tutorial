#include <stdio.h>

int main () {
   int a, b;
    printf("Please enter the rational number in form a/b \n");
    scanf("%i%i", &a, &b);

    while (b < 1) {
        printf("Please enter a number greater than 0");
        scanf("%i%i", &a, &b);
    }

    int a1 = a * 2;
    int b1 = b * 2;
    int a2 = a * 3;
    int a3 = a * 4;
    int b2 = b * 3;
    int b3 = b * 4;

    printf("The next three equivalent rational numbers are \n %i / %i \n %i / %i \n %i / %i",  a1,b1,a2,b2,a3,b3);
return 0;
}
