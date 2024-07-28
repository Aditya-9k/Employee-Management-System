# Employee Management System

A simple C program to manage employee records, including functionalities to add, view, search, update, and delete employee information.

## Features

- **Add Employee**: Add new employees to the system by providing their ID, name, department, and salary.
- **View Employees**: Display all employees currently stored in the system.
- **Search Employee**: Search for an employee by their ID and display their details.
- **Update Employee**: Update the details of an existing employee by their ID.
- **Delete Employee**: Remove an employee from the system by their ID.

## Usage

1. **Add Employee**
    - Enter employee details including ID, name, department, and salary.

2. **View Employees**
    - Display a list of all employees with their details.

3. **Search Employee**
    - Enter the employee ID to search and display their details if found.

4. **Update Employee**
    - Enter the employee ID to update and provide new details for name, department, and salary.

5. **Delete Employee**
    - Enter the employee ID to delete their record from the system.
  
   
## Code Structure

The program consists of the following functions:

- `add_employee()`: Adds a new employee to the system.
- `view_employees()`: Displays all employees.
- `search_employee()`: Searches for an employee by ID.
- `update_employee()`: Updates an employee's details.
- `delete_employee()`: Deletes an employee by ID.

## Example

```sh
Employee Management System
1. Add Employee
2. View Employees
3. Search Employee
4. Update Employee
5. Delete Employee
6. Exit
Enter your choice: 1
Enter employee ID: 101
Enter employee name: John Doe
Enter department: IT
Enter salary: 55000
Employee added successfully.

Employee Management System
1. Add Employee
2. View Employees
3. Search Employee
4. Update Employee
5. Delete Employee
6. Exit
Enter your choice: 2
ID  Name        Department  Salary
101 John Doe    IT          55000.00
