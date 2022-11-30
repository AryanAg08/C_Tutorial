#include <stdio.h>
const int arry1[10][10];
int sum = 0;

void main () {
    int i,j;

    printf("Enter the matrix: \n");
    for (i = 0 ; i <3; i++) {
        for (j =0 ; j <3; j++) {
            scanf(
                "%d", &arry1[i][j]
            );
        }
    }

   for (i = 0; i <3; i++) {
    for (j = 0; j <3; j++) {

    
    sum = sum + arry1[i][2 - j]; 
   
     }
      printf("The sum of elements in %dst row = %d", i +1 , sum);
      sum = 0;
    printf("\n");
   }

   sum = 0;
 for (j = 0; j <3; j++) {
    for (i = 0; i <3; i++) {

    
    sum = sum + arry1[i][2 - j]; 
   
     }
      printf("The sum of elements in %dst column = %d", j +1, sum);
     
      
    printf("\n");
     sum = 0;
   }
}