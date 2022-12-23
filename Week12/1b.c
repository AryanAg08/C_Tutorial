#include <stdio.h>

void main() {
    FILE *FPTR;
    FPTR = fopen("try.txt","w");
    char sent[1000];

    if (FPTR == NULL) {
        printf("Error!! Cannot access file");
    }
    else {
        printf("Enter sentence for the file: ");
        fgets(sent, 1000, stdin);
        fprintf(FPTR, "%s", sent);

        fclose(FPTR);
        printf("The file test.txt created successfully..!!");
    }
}