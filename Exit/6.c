#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char source_filename[100];
  char target_filename[100];
  char c;

  printf("Enter the name of the source file: ");
  scanf("%s", source_filename);

  printf("Enter the name of the target file: ");
  scanf("%s", target_filename);

  FILE *source_fp = fopen(source_filename, "r");
  if (source_fp == NULL) {
    printf("Error opening source file!\n");
    exit(1);
  }

  FILE *target_fp = fopen(target_filename, "w");
  if (target_fp == NULL) {
    printf("Error opening target file!\n");
    exit(1);
  }

  while ((c = fgetc(source_fp)) != EOF) {
    if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
      fputc(c, target_fp);
    }
  }

  fclose(source_fp);
  fclose(target_fp);

  printf("Data in the new file:\n");
  target_fp = fopen(target_filename, "r");
  if (target_fp == NULL) {
    printf("Error opening target file!\n");
    exit(1);
  }
  while ((c = fgetc(target_fp)) != EOF) {
    printf("%c", c);
  }
  printf("\n");
  fclose(target_fp);

  return 0;
}
