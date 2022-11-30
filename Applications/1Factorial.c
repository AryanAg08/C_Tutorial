#include <stdio.h>
int factorial(int);

int main () {
    int a, fact;
    
    printf("Enter the number you want factorial of: ");
    scanf("%d", &a);
    fact = factorial(a);
    printf("The answer is %d", fact);
}

int factorial (int b) {
    int f =1,i;
    
    for (i =1; i <= b; i++)
    f = f*i;
    
    return f;
}