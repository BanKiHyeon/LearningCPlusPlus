#include <iostream>
#include <future>

using namespace std;

int calculate()
{
	return 123;
}

int main()
{
	auto myFuture{ async(calculate) };
	//auto myFuture{ async(launch::async, calculate) };
	//auto myFuture{ async(launch::deferred, calculate) };
	int result{ myFuture.get() };
	cout << result << endl;
}
