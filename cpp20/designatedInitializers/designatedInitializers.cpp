import <iostream>;
import <format>;

struct Employee {
	char firstInitial;
	char lastInitial;
	int  employeeNumber;
	int  salary{ 75'000 };
};

int main()
{
	// 지정초기자
	Employee anEmployee1{
		.firstInitial = 'J',
		.lastInitial = 'D',
		.employeeNumber = 42,
		.salary = 80'000
	};

	std::cout << std::format("em1.firstInitial : {}", anEmployee1.firstInitial) << std::endl;
	std::cout << std::format("em1.lastInitial : {}", anEmployee1.lastInitial) << std::endl;
	std::cout << std::format("em1.employeeNumber : {}", anEmployee1.employeeNumber) << std::endl;
	std::cout << std::format("em1.salary : {}\n", anEmployee1.salary) << std::endl;

	Employee anEmployee2{
		.firstInitial = 'J',
		.lastInitial = 'D',
		.salary = 80'000
	};

	std::cout << std::format("em2.firstInitial : {}", anEmployee2.firstInitial) << std::endl;
	std::cout << std::format("em2.lastInitial : {}", anEmployee2.lastInitial) << std::endl;
	std::cout << std::format("em2.employeeNumber : {}", anEmployee2.employeeNumber) << std::endl;
	std::cout << std::format("em2.salary : {}\n", anEmployee2.salary) << std::endl;
	
	Employee anEmployee3{
		.firstInitial = 'J',
		.lastInitial = 'D'
	};

	std::cout << std::format("em3.firstInitial : {}", anEmployee3.firstInitial) << std::endl;
	std::cout << std::format("em3.lastInitial : {}", anEmployee3.lastInitial) << std::endl;
	std::cout << std::format("em3.employeeNumber : {}", anEmployee3.employeeNumber) << std::endl;
	std::cout << std::format("em3.salary : {}", anEmployee3.salary) << std::endl;
}
