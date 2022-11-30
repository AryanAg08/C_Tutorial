#include <stdio.h>

void main () {
    int arr[100];
    int i, size;

    printf("Enter the no of elements you want to enter: ");
    scanf("%d", &size);

    for (i = 0; i <size; i++) {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

int pos, new_element;
    printf("Enter the position you want to change: ");
    scanf("%d", &pos);
    printf("Enter the new element which you want to enter at %d position.", pos);
    scanf("%d", &new_element);

    int arr2[100];

    for (i = 0; i < pos - 2; i++) {
        arr2[i] = arr[i];
    } 

    arr2[pos - 2 ] = new_element;

    for (i = pos - 1; i < size + 1; i++) {
        arr2[i] = arr[i -1];
    }   

    printf("New array is: ");
    for (i = 0; i <size +1; i++) {
        printf("%d, ", arr2[i]);
    }
    
}