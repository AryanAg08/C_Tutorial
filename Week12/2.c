// Write a function in C to compare two numbers and return a pointer to the large number.

#include <stdio.h>

int compare (int *, int *);

int compare (int *a, int *b) {
    int FLAG;
    if (*a > *b) 
    return 0;
    else 
    return 1;
}

void main () {
    int x = 9;
    int y = 10;

    int *a = &x;
    int *b = &y;


    int FLAG = compare(a, b);

    if (FLAG == 0) {
        printf("Big number is %d", x);
    }
    else {
        printf("Big number is %d", y);
    }
}