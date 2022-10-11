#include <stdio.h>

int main() {
    int numA;
    
     printf("Enter the three digit number\n");
     scanf("%d", &numA);
     
     int A = numA % 10;
     int B = numA - A;
     int C = B / 10;
     int D = C % 10;
     int E = C / 10;

     printf("The reverse of the Number %i is ", numA);
     printf("%d%d%d", A,D,E);
        
    return 0;
}

