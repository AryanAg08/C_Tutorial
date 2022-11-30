#include <stdio.h>

void main () {
    char arr[100];

     printf("Enter the string: ");
     gets(arr);

     int count = 0;
     int i =0;
     while (arr[i] != '\0') {
        count++;
        i++;
     }

     printf("%d", count);
}