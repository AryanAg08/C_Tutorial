#include <stdio.h>
struct info
{
   int number;
    char name[20];
    int rank;
};

int main()
{
    struct info *personPtr, person1;
    personPtr = &person1; 
    char a;  

    printf("Enter Number: ");
    scanf("%d", &personPtr->number);
    

    printf("Enter name: ");
    scanf("%c",&a);
    gets(personPtr->name);

    printf("Enter Rank: ");
    scanf("%d",&personPtr->rank);

    printf("Displaying:\n");
    printf("Number: %d\n", personPtr->number);
    printf("Rank: %d\n", personPtr->rank);
    printf("Name: %s", personPtr->name);

    return 0;
}