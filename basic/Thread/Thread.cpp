#include <iostream>
#include <thread>

using namespace std;

class Request
{
public:
	Request(int id) : m_id{ id } {}

	void process() {
		cout << "Processing request " << m_id << endl;
	}
private:
	int m_id;
};

void lamdaThreaad() {
	int id{ 2 };
	int numiterations{ 5 };
	thread t2{ [id, numiterations] {
		for (int i = 0; i < numiterations; ++i) {
			cout << "Counter " << id << " has value " << i << endl;
		}
	} };
	t2.join();
}

int main()
{
	Request req{ 100 };
	thread t{ &Request::process , &req };
	
	t.join();
	lamdaThreaad();
}

