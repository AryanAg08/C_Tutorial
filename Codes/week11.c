// question 1
// #include <stdio.h>

// struct user {
//     char name[100];
//     int First_Year_Marks;
//     int Second_Year_Marks;
// };

// int SCLR(struct user Student) {
//     int sclr = (Student.First_Year_Marks + Student.Second_Year_Marks) / 2;

//     int FLAG;

    
// if (sclr >= 85) {
//     FLAG = 1;
// } else {
//     FLAG = 0;
// }
// return FLAG;
// }

// void main () {
 
//  struct user Student;
//     printf("Enter your name: ");
//     gets(Student.name);
// printf("Enter your 1st year marks: ");
// scanf("%d", &Student.First_Year_Marks);
// printf("Enter the 2nd year marks: ");
// scanf("%d", &Student.Second_Year_Marks);

// switch(SCLR(Student)) {
//     case 0:
//     printf("Sorry! you are not eligible for Scholarship!!");
//     break;

//     case 1:
//     printf("Congrats!! You are eligible for Scholarship!!");
//     break;
// }

// }


// Question  2

// #include <stdio.h>

// void swap (int*, int*);

// void swap(int*i, int*j) {
//     int temp;
    
//     temp = *i;
//     *i = *j;
//     *j = temp;

//     printf("the swapped values are \na = %d \nb= %d", *i, *j);
// }

// void main () {
//     int a, b;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);

//     swap(&a, &b);
// }



// Question 3

// #include <stdio.h>

// void change(int *);
// int Change(int a);

// int Change(int i) {
//     int s = i + 100;
//     return s;
// }

// void change(int *a) {
//     *a += 100;
// }

// void main () {
//     int a;

//     printf("Enter the number: ");
//     scanf("%d", &a);
//     printf("This is call by value %d\n", Change(a));
//     change(&a);
//     printf("This is call by refrence %d\n", a);
// }

// Question 4

// #include <stdio.h>

// void main () {
//     int a = 20;
//     int *b = &a; 

//     printf("Value of a is:%d \n Value of ptr a is : %u\n Value of *a is: %d ", a, b, *b);
// }


// Question 5

// #include<stdio.h>
// void smallest(int a[],int *small)
// {  *small=a[0];
//     for(int i=1;i<5;i++)
//     {
//         if(a[i]<*small)
//         *small=a[i]; 
//     }
    
// }
// void main()
// {
//     int a[5],small=0;
//     printf("enter value of array");
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     smallest(a,&small);
//     printf("Smallest number: %d",small);

// }