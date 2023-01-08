#include <stdio.h>

int main() {
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (num / 100000 == 5 && (num / 10000) % 10 == 5 && (num / 1000) % 10 == 5) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}
