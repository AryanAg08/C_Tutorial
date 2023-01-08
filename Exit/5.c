#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char filename[100];
  char data[100];
  int i;

  printf("Enter the name of the file: ");
  scanf("%s", filename);

  FILE *fp = fopen(filename, "w");
  if (fp == NULL) {
    printf("Error opening file!\n");
    exit(1);
  }

  printf("Enter data to be written to the file (enter 'exit' to stop):\n");
  while (1) {
    scanf("%s", data);
    if (strcmp(data, "exit") == 0) {
      break;
    }
    fprintf(fp, "%s\n", data);
  }
  fclose(fp);

  fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("Error opening file!\n");
    exit(1);
  }

  printf("Data in the file in reverse order:\n");
  fseek(fp, 0, SEEK_END);
  long pos = ftell(fp);
  for (i = pos - 1; i >= 0; i--) {
    fseek(fp, i, SEEK_SET);
    char c = fgetc(fp);
    printf("%c", c);
  }
  printf("\n");
  fclose(fp);

  return 0;
}
