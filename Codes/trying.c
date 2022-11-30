#include <stdio.h>

void main () {
 char arr[100];


printf("Enter the array!!");
gets(arr);

int i = 0; 

while(arr[i] != '\0') {
    i++;
}

printf("The length of the array: ");
puts(arr);
printf("  is: %d", i);

}