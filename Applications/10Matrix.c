#include <stdio.h>

void MatrixMaking(int, int);

void main () {
    int m,n;

    printf("Enter the type of matrix you want m X n : ");
    scanf("%d%d", &m, &n);

    MatrixMaking(m, n);
}

void MatrixMaking(int m, int n) {
    int i,j;
    int arr1[m][n];

    for (i =0 ; i < m; i++) {
        for (j =0; j <n; j++) {
            printf("Enter the element [%d][%d]", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }

  printf("The Matrix is: \n");

  for (i =0 ; i < m; i++) {
        for (j =0; j <n; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
  
  int sum = 0;

   for (i =0; i < 1; i++) {
    for (j =0; j <n; j++) {
        sum += arr1[i][j];
    }
   }
printf("the sum of R1 is: %d \n", sum);

int Dsum = 0; 
for (i = 0; i <m; i++) {
    for (j =0; j < n; j++ ) {
        if (i == j) 
        Dsum += arr1[i][j];
    }
}

printf("The sum of diagonal is: %d", Dsum);
}