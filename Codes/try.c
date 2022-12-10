# include <stdio.h>

union university{
    int num;
    int num_dep;
    char dep_name[30];
};

void main(){
    int number, dep;
    union university data;
    printf("Kindly Enter the Number of students: ");
    scanf("%d",&data.num);
    printf("\n Number of Students Entered: %d",data.num);
    printf("Kindly Enter the Number of department: ");
    scanf("%d",&data.num_dep);
    printf("\n Number of Department Entered: %d",data.num_dep);
    printf("Kindly Enter the Dep Name: ");
    gets(data.dep_name);
    printf("\n Number of Students Entered: %s",data.dep_name);


printf("hello world!!")


}