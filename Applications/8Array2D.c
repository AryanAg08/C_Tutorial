#include <stdio.h>

void main () {
    int i,j;
    int arr[10][10];

    for (i = 0; i < 10; i++) {
        for (j = 0 ; j < 5; j++) {
            printf("Enter the input \n");
            scanf("%d", &arr[i][j]);
        } 
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 5; j++) 
        printf("%d\n", arr[i][j]);
    }
}