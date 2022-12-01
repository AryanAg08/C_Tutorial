#include <stdio.h>

void main () {
    char a1[100], b1[100];

    printf("Enter string 1: ");
    gets(a1);

    printf("Enter string 2: ");
    gets(b1);
    int i =0; 
  while (a1[i] != '\0')
  i++;

int j = 0;
  while (b1[j] != '\0')
  j++;

  int a,b,flag;

  for (a =0; a <= i -j; a++) {
    for (b = a; b <a + j; b++){
      flag = 1;
      if (a1[b] != b1[b - a]) {
        flag = 0;
        break;
      }
    }

    if (flag == 1) 
    break; 
  } 
   
if (flag == 1) 
printf("YUP!!");
else
printf("nope!!");

}