/*Write a program to scan an employee details like sno., name, ID, gender,
 phone no., salary, address and print output in the table format*/

#include <stdio.h>

struct Employee {
    char name[50];
    char gen[50];
    char address[200];
    int SNo, ID, phn;
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter SNo: ");
    scanf("%d", &emp.SNo);

    printf("Enter employee ID: ");
    scanf("%d", &emp.ID);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee gender: ");
    scanf("%s", emp.gen);

    printf("Enter employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter employee Phone No.: ");
    scanf("%d", &emp.phn);

    printf("Enter employee Address: ");
    scanf("%s", emp.address);

    
    printf("\n==========================================================================================\n");
    printf("\n                                   Employee Details                                       \n");
    printf("\n==========================================================================================\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("| SNo | ID |       Name          | Gender |  Salary  |   Phone No.   |         Address     |\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("| %-3d | %-5d | %-20s | %-6s | %-10.2f |  %-13d  |  %-23s |\n", emp.SNo, emp.ID, emp.name, emp.gen, emp.salary, emp.phn, emp.address);

    return 0;
}

