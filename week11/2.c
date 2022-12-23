#include <stdio.h>

struct Data {
    char Name;
    int Roll_No;
    int Chem_Marks;
    int Maths_Marks;
    int Physics_Marks;
    float percentage;
} s[5];

void main () {
 
   for (int i = 1; i < 6; i++) {
    printf("Enter the name of student %d", i);
    scanf("%c", &s[i].Name);
   }

   printf("Successfully entered the student names!!");

   for (int j = 1; j <6; j++) {
    printf("Enter the roll number of student %d", j);
    scanf("%d", &s[i].Roll_No);
   }
   printf("Successfully stored Roll Number!!");

   for (int k = 1; k < 6; k++) {

   }
}