import <iostream>;

namespace mycode {
	void foo()
	{
		std::cout << "foo() called in the mycode namespace" << std::endl;
	}
}

namespace a::b::c {
	void foo()
	{
		std::cout << "foo() called in the a::b::c namespace" << std::endl;
	}
}

namespace a {
	namespace b {
		void foo()
		{
			std::cout << "foo() called in the a::b namespace" << std::endl;
		}
	}
}

using namespace mycode;
namespace Sum = a::b::c;

int main()
{
	mycode::foo();
	foo();			
	a::b::c::foo();
	Sum::foo();
	a::b::foo();
}
