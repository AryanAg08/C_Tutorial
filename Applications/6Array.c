#include <stdio.h>

void main () {
    int arrsize;

    printf("Enter the array Size: ");
    scanf("%d", &arrsize);

    int arr1[arrsize];
    int i;

    printf("Enter the students marks accordingly\n");

    for (i = 0; i <arrsize; i++) {
        printf("Enter the student %d marks: ", i+1);
        scanf("%d", &arr1[i]);
    }

    // Representing them

    printf("The marks for each student are as follows: \n");
    printf("----------------\n");
    int j;
    for (j =0; j < arrsize; j++) {
        printf("| Student %d | %d Marks |\n", j +1, arr1[j]);
    }
    printf("------------------");
}