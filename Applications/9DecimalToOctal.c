#include <stdio.h>

int DECTOOCT(int);

void main () {
    int num, OCT;

    printf("Enter the number: ");
    scanf("%d", &num);

    OCT = DECTOOCT(num);

    printf("The octal is %d", OCT);
}

int DECTOOCT(int i) {
    int j=1, oct =0;

    while (i != 0) {
        oct += (i % 8) *j;
        i /= 8;
        j *= 10;
    }
    return oct;
}