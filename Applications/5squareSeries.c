#include <stdio.h>

void Series(int a);

int main () {
    int num;

    printf("Enter the count: ");
    scanf("%d", &num);

    Series(num);
}

void Series(int a) {
    int i, j;

    for (i = 0 ; i <a; i++) {
        j = i + 1;
        printf("%d sqaure = %d\n", i+ 1, j * j);
        fgets(i, 100, stdin)

    }
}

// Make a program from same series but take repsonse what he wants square , cube or anything;