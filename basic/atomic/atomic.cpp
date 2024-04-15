#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void increment(atomic<int>& counter)
{
	for (int i{ 0 }; i < 100; ++i) {
		//cout << "Call increment = " << counter << endl;
		++counter;
		this_thread::sleep_for(1ms);
	}
}

/*void increment(int& counter)
{
	for (int i{ 0 }; i < 100; ++i) {
		//cout << "Call increment = " << counter << endl;
		++counter;
		this_thread::sleep_for(1ms);
	}
}*/

int main()
{
	//int counter{ 0 };
	atomic<int> counter{ 0 };
	vector<thread> threads;

	for (int i{ 0 }; i < 10; ++i) {
		threads.push_back(thread{ increment, ref(counter) });
	}

	for (auto& t : threads) {
		t.join();
	}

	cout << "Result = " << counter << endl;
}
