#include <stdio.h>

void main() {
    FILE *FPTR;
    FPTR = fopen("try.txt", "w");
    char sent[4][1000];

    if (FPTR == NULL) {
        printf("Error!! opening the file.");
    }
    else {
        for (int i = 0; i < 4; i++) {
            fprintf(FPTR, "test line %d\n", i+1);
        }
        fclose(FPTR);
    }

    FILE *FP;
    FP = fopen("try.txt", "r");
    if (FP == NULL) {
        printf("Error!!");
    }
    else {
        printf("The contents are: \n");
        for (int j = 0; j <4; j++) {
            fgets(sent[j], sizeof(sent), FP);
            puts(sent[j]);
        }
        fclose(FP);
    }
}