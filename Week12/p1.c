#include <stdio.h>
#include <string.h>

void addbal();
void sort();
struct acc
{
    char name[20];
    double accountNo;
    float balance;
} a[4];

void main () {
    char temp;
    for (int i = 0; i<4; i++) {
        printf("Enter the nameof holder %d: ", i+1);
        gets(a[i].name);

        printf("Enter your account number: ");
        scanf("%d", &a[i].accountNo);

        printf("Enter your balance: ");
        scanf("%f",&a[i].balance);
        scanf("%c", &temp);
    }

addbal();
sort();


}


void addbal () {
    for (int j = 0; j <4; j++) {
        if (a[j].balance > 10000.00) {
            a[j].balance = a[j].balance + 500.00;
        }
    }
}

void sort () {
    double accNo;
    char AcNAme[20];
    float bal;
     for (int k = 0; k <3; k++) {
        if (a[k].balance < a[k+1].balance) {
           strcpy(AcNAme, a[k].name);
           accNo = a[k].accountNo;
           bal = a[k].balance;

           a[k].accountNo = a[k+1].accountNo;
           strcpy(a[k].name, a[k+1].name);
           a[k].balance = a[k+1].balance;    

           a[k+1].accountNo = accNo;
           strcpy(a[k+1].name, AcNAme);
           a[k+1].balance = bal;        
        }
     }

     for (int y = 0 ; y<4; y++) {
    printf("Name:");
    puts(a[y].name);
    printf("Account No: %d\n", a[y].accountNo);
    printf("Balance: %.2f\n", a[y].balance);
}
}