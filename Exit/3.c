#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void set_union(int A[], int B[], int sizeA, int sizeB) {
int C[MAX_SIZE];
int sizeC = 0;

for (int i = 0; i < sizeA; i++) {
C[sizeC] = A[i];
sizeC++;
}


for (int i = 0; i < sizeB; i++) {
int isInC = 0;
for (int j = 0; j < sizeC; j++) {
if (B[i] == C[j]) {
isInC = 1;
break;
}
}
if (!isInC) {
C[sizeC] = B[i];
sizeC++;
}
}

printf("Set union: { ");
for (int i = 0; i < sizeC; i++) {
printf("%d ", C[i]);
}
printf("}\n");
}

void set_intersection(int A[], int B[], int m, int n) {
  int i, j;

  printf("Intersection of A and B: { ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (A[i] == B[j]) {
        printf("%d ", A[i]);
        break;
      }
    }
  }
  printf("}\n");
}


void set_difference(int A[], int B[], int m, int n) {
  int i, j;

  printf("A - B: { ");
  for (i = 0; i < m; i++) {
    int found = 0;
    for (j = 0; j < n; j++) {
      if (A[i] == B[j]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      printf("%d ", A[i]);
    }
  }
  printf("}\n");

  printf("B - A: { ");
  for (i = 0; i < n; i++) {
    int found = 0;
    for (j = 0; j < m; j++) {
      if (B[i] == A[j]) {
        found = 1;
        break;
      }
    }
    if (!found) {
      printf("%d ", B[i]);
    }
  }
  printf("}\n");
}

int main() {
  int A[MAX_SIZE], B[MAX_SIZE];
  int m, n, i;

  printf("Enter the number of elements in set A: ");
  scanf("%d", &m);

  printf("Enter the elements of set A: ");
  for (i = 0; i < m; i++) {
    scanf("%d", &A[i]);
  }

  printf("Enter the number of elements in set B: ");
  scanf("%d", &n);

  printf("Enter the elements of set B: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &B[i]);
  }

  set_difference(A, B, m, n);
  set_union(A, B, m, n);
set_intersection(A,B,m,n);

  return 0;
}
