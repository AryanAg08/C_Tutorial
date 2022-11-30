#include <stdio.h>

int square (int a);

void main () {
    int num, sq;

    printf("Enter the number: ");
    scanf("%d", &num);

    sq = square(num);

    printf("The square of %d is %d", num, sq);
}

int square(int a) {
    int ans =1;

    ans = ans * a *a;

    return ans;
}