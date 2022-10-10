#include <stdio.h>

int main() {
    int numA, numB, numC, numD;
    
     printf("Enter the point A \n");
     scanf("%d %d", &numA, &numB);
//     printf("%d %d", numA, numB);
     
     printf("Enter the point B \n");
     scanf("%d %d", &numC, &numD);
  //   printf("%d %d", numC, numD);
     
     int PointA = numA - numB;
     int PointB = numC - numD;
     
     printf("Distance between two points is %d", (PointA * PointA) + (PointB * PointB));
     
    return 0;
}
