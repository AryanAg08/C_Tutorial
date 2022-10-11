#include <stdio.h>

int main () {

  int A = 0;
  int B = 1;

  printf("The truth table for AND Operator is..\n");
  printf("A  B  :  C = A&&B\n");
  printf("%i  %i  :  %i\n", A, A, A);
  printf("%i  %i  :  %i\n", A, B, A);
  printf("%i  %i  :  %i\n", B, A, A);
  printf("%i  %i  :  %i\n\n\n", B, B, B);

  printf("The truth table for OR Operator is..\n");
  printf("A  B  :  C = A || B\n");
  printf("%i  %i  :  %i\n", A, A, A);
  printf("%i  %i  :  %i\n", A, B, B);
  printf("%i  %i  :  %i\n", B, A, B);
  printf("%i  %i  :  %i\n\n\n", B, B, B);

  printf("The truth table for NOT Operator is..\n");
  printf("A  :  B = !A\n");
  printf("%i  :  %i\n", A, B);
  printf("%i  :  %i\n", B, A);
  
}



// #include<stdio.h>


// int main()
// {
//  int a[2][2],b[2][2],c[2];
//  int i,j;
//  for(i=0;i<=1;i++)
//  {
//  for(j=0;j<=1;j++)
//   {
//    a[i][j]=(i&&j);
//    b[i][j]=(i||j);
//   }
//  }

//  for(i=0;i<=1;i++)
//  {
//  c[i]=(!i);
//  }

//  printf("\nThe Truth Table for AND Operator ( && ) is..\n");
//  printf("   A    B     :    C=A&&B\n");
// for(i=0;i<=1;i++)
//  {
//   for(j=0;j<=1;j++)
//    {
//     printf("   %d    %d     :    %d\n",i,j,a[i][j]);
//    }
//  }
//  printf("\nThe Truth Table for OR operator( || ) is..\n");
//  printf("   A    B     :    C=A||B\n");
//  for(i=0;i<=1;i++)
//  {
//   for(j=0;j<=1;j++)
//    {
//     printf("   %d    %d     :    %d\n",i,j,b[i][j]);
//    }
//  }
//  printf("\nThe Truth Table for NOT operator (!) is..\n");
//  printf("   A   :  B = !A\n");
//  for(i=0;i<=1;i++)
//  {
//    printf("   %d   :  %d\n",i,c[i]);
//  }
// }
