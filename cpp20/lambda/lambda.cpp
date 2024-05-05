import <iostream>;
import <vector>;
import <algorithm>;
import <format>;

using namespace std;

int main()
{
	vector<int> values{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	int callCount{0};

	int64_t count{ count_if(begin(values), end(values),
		[&callCount](int value) {
			++callCount;
			return value % 2 == 0;
		})
	};

	cout << format("There are {} even elements in the vector.", count) << endl;
	cout << format("Lambda was called {} times.", callCount) << endl;
}