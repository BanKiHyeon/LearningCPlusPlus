#include <iostream>
#include <thread>
#include <future>

using namespace std;

void doWork(promise<int> thePromise)
{
	thePromise.set_value(42);
}

int main()
{
	promise<int> myPromise;
	auto theFuture{ myPromise.get_future() };
	thread theThread{ doWork, move(myPromise) };
	int result{ theFuture.get() };
	cout << "Result: " << result << endl;

	theThread.join();
}
