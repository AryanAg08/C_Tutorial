#include <stdio.h>

void main () {
    FILE *FPTR;
    char filename[100];
    char line[10000];
    int count = 0;
    char sample_chr;
printf("Enter the file name: ");
scanf("%s", filename);

FPTR = fopen(filename, "r");
if (FPTR == NULL) {
    printf("Error!!");
}
else {

  
    while ((sample_chr = fgetc(FPTR)) != EOF) {
        
        if (sample_chr == '.')
            count++;
    }
 
    printf("The total number of characters are: %d", count);
fclose(FPTR);
}
}