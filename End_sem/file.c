#include <stdio.h>
void write();

void main () 
{
    FILE *fptr;
    fptr = fopen("arya.txt", "r");
    char sent[1000];

    if (fptr == NULL) {
        printf("Error!! Cannot access the file!!");
    }
    else {
        fgets(sent, 1000, fptr);
        printf("The content of the file is: ");
        puts(sent);
  fclose(fptr);
    }

    write();
}


void write () {
   FILE *WRITE;
   WRITE = fopen("arya.txt", "w+");
    char ENT[1000];

    if (WRITE == NULL) 
    printf("Error opening file!!");

    else {
        printf("Enter the character: ");
        gets(ENT);

        fprintf(WRITE, ENT);

        fclose(WRITE);
    }
}