// Q9. Define a union which can record the ID, Name, Age, and Salary of two employees
// Employee. Using loops, record the input for five users and print all the records such that no
// data is lost while printing the output.


// #include <stdio.h>

// union try1
// {
//     char ID[30];
//     char Name[20];
//     int Age;
//     float salary1;
//     float salary2;
// };

// void main () {
//     union try1 user[5];
//     char a,b;
//     for (int i = 0; i <5; i++) {
//        printf("Enter the ID of user %d", i+1);
//        puts(user[i].ID);
//        scanf("%c", &a);
//     }

//     for (int j = 0; j <5; j++) {
//         printf("Entered ID for user %d: %s\n",j+1, user[j].ID);
//     }
 
//      for (int k = 0; k <5; k++) {
//        printf("Enter the Name of user %d", k+1);
//        puts(user[k].Name);
//        scanf("%c", &a);
//     }

//     for (int l = 0; l <5; l++) {
//         printf("Entered Name for user %d: %s\n",l+1, user[l].Name);
//     }

//     for (int m = 0; m <5; m++) {
//        printf("Enter the Age of user %d", m+1);
//        scanf("%d", &user[m].Age);
//     }

//     for (int n = 0; n <5; n++) {
//         printf("Entered Age for user %d: %d\n",n+1, user[n].Age);
//     }




// }
#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id, age;
    double salary;
} Employee;
 
int main()
{
    
    int n=5;

    
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

       
        printf("Id: ");
        scanf("%d",&employees[i].id);
        
        printf("Age: ");
        scanf("%d",&employees[i].age);

        
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

       
        char ch = getchar();
 
        printf("\n");
    }
 
    
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
        
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}