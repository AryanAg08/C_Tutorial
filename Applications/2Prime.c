#include <stdio.h>
int IsPrime(int);

int main () {
    int num, Prime;

    printf("Enter the number you want to check: ");
    scanf("%d", &num);

    while (num <1) {
        printf("Please enter a natural number greater than 1");
        scanf("%d", &num);
    }

   Prime = IsPrime(num);

   if (Prime == 0) {
    printf("Entered number is not a prime number");
   }
   else {
    printf("%d is a prime number", num);
   }
}

int IsPrime (int p) {
    int i, isPrime = 1;
   // number divide by 2 and then for loop till half starting from 2;
    for (i = 2; i <= p/2; ++i) {
        if (p % i == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}