#include <string>;
#include <utility>;

using namespace std;

string getString()
{
	return "Hello world!";
}

int main()
{
	int x{ 3 }, y{ 4 }, z{ 5 };
	int& xRef{ x };
	xRef = 10;

	xRef = y;

	int& zRef{ z };
	zRef = xRef;

	const int& zRef2{ z };

	const int& unnamedRef2{ 5 };

	const string& string2{ getString() };

	int* intP{ nullptr };
	int*& ptrRef{ intP };
	ptrRef = new int;
	*ptrRef = 5;

	int* xPtr{ &xRef };
	*xPtr = 100;

	pair myPair{ "hello", 5 };
	const auto& [theString, theInt] { myPair };
}
