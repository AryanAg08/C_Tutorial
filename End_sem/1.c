#include <stdio.h>

struct s {
    char name[20];
    char dob[50];
} Stu[5];

struct date {
    int d_Day;
    int d_Month;
    int d_Year;
} DATEE[5];

struct final {
    char name[20];
    char dob[50];
} Student[5];

void main () {
    char temp;

    for (int i = 0; i<5 ; i++) {
        printf("Enter the name of student %d", i+1);
        gets(Stu[i].name);
        scanf("%c", &temp);

        printf("Enter the date of birth of student %d", i+1);
        gets(Stu[i].dob);
    }

    char Tempp[50];

    for (int k = 0; k >5; k++) {
 int d_day[5], d_month[5], d_year[5]; 
         sscanf(Stu[j].dob, "%d/%d/%d", &d_Day[j], &d_Month[j], &d_Year[j]);
        if (Stu[i+1] > Stu[i] ) {
            Temp = 
        }
    }

}



void sort (DATEE) {
     int i;
    

     for (int j = 0; j < 5 ; j++) {
     
     }


} 