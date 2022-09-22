#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaring the structure outside function (Global Variable)
struct employee
{
    char  name[50];
    char hireDate[10];
    float salary;
};


int funcPretypedEmployee();
int funcUserTypeEmp();

int main()
{
    funcPretypedEmployee();
    funcUserTypeEmp();
    return 0;
}

int funcPretypedEmployee()
{
    struct employee CEO;
    CEO = (struct employee){.name="Roberto Setubal",.hireDate="20080617",.salary=1007600.10};

    printf("The Itau's CEO is %s\n", CEO.name);
    printf("The CEO was hired in %s\n", CEO.hireDate);
    printf("The CEO's salary is %.2f\n", CEO.salary);

    return 0;
}

int funcUserTypeEmp()
{
    struct employee userTell;

    printf("\nFunction 02:user defined employee\n\nPlease type the name of employee:\n");
    scanf("%s", userTell.name); //Since its a char array, we dont need to provide the address.
    printf("Please type the hire date (YYYYMMDD)\n");
    scanf("%s", userTell.hireDate);
    printf("Please type the salary:\n");
    scanf("%f", &userTell.salary);

    printf("\n Name: %s\nHire date:%s\nSalary:%.2f\n", userTell.name, userTell.hireDate, userTell.salary);

    return 0;
}
