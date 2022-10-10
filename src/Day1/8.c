#include <stdio.h>

int main() {
    int numA, numB, numC, numD, numE, numF;
    
     printf("Enter the point A \n");
     scanf("%d %d", &numA, &numB);
//     printf("%d %d", numA, numB);
     
     printf("Enter the point B \n");
     scanf("%d %d", &numC, &numD);
  //   printf("%d %d", numC, numD);
     
     printf("Enter the point C \n");
     scanf("%d %d", &numE, &numF);
     
     
     int PointA = numA - numB;
     int PointB = numC - numD;
     int PointC = numE - numF;
     
     int distanceAC = (PointA * PointA) + (PointC * PointC);
     int distanceBC = (PointB * PointB) + (PointC * PointC);
     
     printf("Distance between AC points is %d \n\n", distanceAC);
     printf("Distance between BC points is %d \n", distanceBC);
     
    return 0;
}
