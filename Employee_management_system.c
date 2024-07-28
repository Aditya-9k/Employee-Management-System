#employee Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int id;
    char name[50];
    char department[50];
    float salary;
} Employee;

Employee employees[MAX_EMPLOYEES];
int employee_count = 0;

void add_employee() {
    if (employee_count >= MAX_EMPLOYEES) {
        printf("Error: Employee limit reached.\n");
        return;
    }

    Employee e;
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter employee name: ");
    scanf(" %[^\n]%*c", e.name); // Read string with spaces
    printf("Enter department: ");
    scanf(" %[^\n]%*c", e.department);
    printf("Enter salary: ");
    scanf("%f", &e.salary);

    employees[employee_count++] = e;
    printf("Employee added successfully.\n");
}

void view_employees() {
    if (employee_count == 0) {
        printf("No employees found.\n");
        return;
    }

    printf("ID\tName\t\tDepartment\tSalary\n");
    for (int i = 0; i < employee_count; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].department, employees[i].salary);
    }
}

void search_employee() {
    if (employee_count == 0) {
        printf("No employees found.\n");
        return;
    }

    int id;
    printf("Enter employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == id) {
            printf("Employee found:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            return;
        }
    }

    printf("Error: Employee not found.\n");
}

void update_employee() {
    if (employee_count == 0) {
        printf("No employees found.\n");
        return;
    }

    int id;
    printf("Enter employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == id) {
            printf("Enter new name: ");
            scanf(" %[^\n]%*c", employees[i].name);
            printf("Enter new department: ");
            scanf(" %[^\n]%*c", employees[i].department);
            printf("Enter new salary: ");
            scanf("%f", &employees[i].salary);
            printf("Employee updated successfully.\n");
            return;
        }
    }

    printf("Error: Employee not found.\n");
}

void delete_employee() {
    if (employee_count == 0) {
        printf("No employees to delete.\n");
        return;
    }

    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);

    int index = -1;
    for (int i = 0; i < employee_count; i++) {
        if (employees[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Error: Employee not found.\n");
        return;
    }

    for (int i = index; i < employee_count - 1; i++) {
        employees[i] = employees[i + 1];
    }

    employee_count--;
    printf("Employee deleted successfully.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;
            case 2:
                view_employees();
                break;
            case 3:
                search_employee();
                break;
            case 4:
                update_employee();
                break;
            case 5:
                delete_employee();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
