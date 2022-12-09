#include <stdio.h>

void main () {
    char a1[100], b1[100];

    printf("Enter string 1: ");
    gets(a1);

    printf("Enter string 2: ");
    gets(b1);
    int i =0;  // 11
  while (a1[i] != '\0')
  i++;

int j = 0;   // 3
  while (b1[j] != '\0')
  j++;

  int a,b,flag;

  for (a =0; a <= i -j; a++) {  // 11 - 3 = 8
    for (b = a; b <a + j; b++){  // b = 0 ; b < 0 + 3 = 3  
      flag = 1;
      if (a1[b] != b1[b - a]) {  // a1[0] != b1[0 - 0] 
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