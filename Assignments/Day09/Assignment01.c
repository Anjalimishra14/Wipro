/* assignment:01 :-capture employee records in the structure and store it in a 
file i.e sn0., employee id, name, salary, gender, dob,phone no.,address in c 
programming */

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
    char gender;
    char dob[15];
    char phone[15];
    char address[100];
};

int main() 
{
    struct Employee emp[10];
    FILE *filePtr;

    filePtr = fopen("employee_records.txt", "w");

    if (filePtr == NULL) 
    {
        printf("Error opening file.\n");
        exit(1);
    }

    for (int i = 0; i < 10; i++) 
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter employee name: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter employee gender (M/F): ");
        scanf(" %c", &emp[i].gender);
        printf("Enter employee date of birth (DD/MM/YYYY): ");
        scanf(" %[^\n]s", emp[i].dob);
        printf("Enter employee phone number: ");
        scanf(" %[^\n]s", emp[i].phone);
        printf("Enter employee address: ");
        scanf(" %[^\n]s", emp[i].address);

        printf("\n");

        // Printing employee records
        printf("\nEmployee %d Details:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Gender: %c\n", emp[i].gender);
        printf("DOB: %s\n", emp[i].dob);
        printf("Phone: %s\n", emp[i].phone);
        printf("Address: %s\n", emp[i].address);
        printf("\n");

        
        fprintf(filePtr, "0%d\t%d\t%s\t%.2f\t%c\t%s\t%s\t%s\n",
                i + 1, emp[i].id, emp[i].name, emp[i].salary, emp[i].gender, emp[i].dob, emp[i].phone, emp[i].address);
    }

}