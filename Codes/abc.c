#include <stdio.h>

union member {
    char member1[10];
    int member2;
    float member3;
} var1, var2;

void main () {
    char a,b;

   printf("enter the value of member 1: ");
   gets(var1.member1);
   printf("Enter the value for member 2: ");
   scanf("%d", &var1.member2);
   printf("Enter the value of member 3: ");
   scanf("%f",&var1.member3);
   printf("The value of member 1 is: %s", var1.member1);
   printf("\n The value of member 2 is %d \n The value of member 3 is %f", var1.member2, var1.member3);
   

   printf("\nEnd of var 1\n\n");


 printf("enter the value of member 1: ");
   scanf("%c", &a);
   scanf("%s", &var2.member1);
   scanf("%c", &b);
   printf("Member1 = ");
   puts(var2.member1);
   printf("Enter the value for member 2: ");
   scanf("%d", &var2.member2);
   printf("MEmber 2: %d\n", var2.member2);
   printf("Enter the value of member 3: ");
   scanf("%f",&var2.member3);
   printf("Member 3: %f\n", var2.member3);

   int size1 = sizeof(var1);
   int size2 = sizeof(var2);

   printf("The size of var1: %d\n The size of var2: %d", size1, size2);
   

}