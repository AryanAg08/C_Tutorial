#include <stdio.h>

void Series(int j);

void main () {
  int num;

  printf("Enter the number of elements you want: "); 
  scanf("%d", &num);
   Series(num);
}

void Series(int j) {
    int i, fab1 = 0, fab2 = 1, sum;

    for (i = 0; i <j; i++) {
        printf("%d", fab1);
        sum = fab1 + fab2;
        fab1 = fab2;
         fab2 = sum;
         // first we define starting 2 terms 0, 1
         // Then we added the value of fab1 and fab2 before it changes
         // we gave fab2 value to fab1 and then sum value to fab2
    }
}