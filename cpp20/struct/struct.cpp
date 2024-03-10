import <iostream>;
import <format>;
import employee;

using namespace std;

int main()
{
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	cout << format("Employee: {}{}", anEmployee.firstInitial,
		anEmployee.lastInitial) << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	cout << format("Salary: ${}", anEmployee.salary) << endl;
}