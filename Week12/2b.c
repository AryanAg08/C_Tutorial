#include <stdio.h>

void main () {
    FILE *FPTR;
    FPTR = fopen("try.txt", "r");
    char sent[1000];

    if (FPTR == NULL) {
       printf("Error!! Can't open file!!");
    }
    else {
        fgets(sent, 1000, FPTR);
        printf("The content of the file is: ");
        puts(sent);

        fclose(FPTR);
    }
}