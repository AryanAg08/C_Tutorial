#include <stdio.h>

void main () {
    int students[10];
    int i,j,roll_no;
    for (i = 0; i <10; i++) {
        printf("Enter Student %d marks with roll no %d: ", i+1, i+1);
        scanf("%d", &students[i]);
    }
    
    printf("Students marks stored successfully \n");
    printf("To view/Check marks press 1 else 0\n");
    scanf("%d", &j);
    
    switch (j) {
        case 0: {
            printf("Thank you for using the program.");
            break;
        }
        case 1: {
            printf("Please enter the desired roll no to view the marks.");
            scanf("%d", &roll_no);
            
            printf("The marks of student with roll number %d is %d", roll_no, students[roll_no - 1]);
            break;
        }
    }
}

// Answer to the gets question is that 
/* 
 If the string is too long that can't fit into a specified array. Also it will buffer too long And will give an error in the end.
 The alternate to the problem is scanf(%[^\n]) And getChar();
*/