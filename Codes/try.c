# include <stdio.h>

union member{
    int mem1;
    float mem2;
    char mem3[10];
};

struct members
{
    int mem1;
    float mem2;
    char mem3[10];
};


void main(){
    char a;
    union member data;
    printf("Enter the member1: ");
    scanf("%d",&data.mem1);
    printf("Enter the member2: ");
    scanf("%f",&data.mem2);
    printf("Enter the member3: ");
    scanf("%c",&a);
    gets(data.mem3);


printf("Entered union data is: \n");
printf("Member1: %d",data.mem1);
printf("\nMember2: %f",data.mem2);
printf("\nMember3: %s\n",data.mem3);

printf("Structure input: \n");

struct members var1;
 char b;
    printf("Enter the member1: ");
    scanf("%d",&var1.mem1);
    printf("Enter the member2: ");
    scanf("%f",&var1.mem2);
    printf("Enter the member3: ");
    scanf("%c", &b);
    gets(var1.mem3);

    printf("Entered structure data is: \n");
    printf("MEmber1: %d\nMember2: %f\nMember3: %s", var1.mem1,var1.mem2,var1.mem3);



}