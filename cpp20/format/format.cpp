import <string>;
import <format>;
import <iostream>;

using namespace std;

int main()
{
	int n{ 42 };

	auto s1{ format("Read {} bytes from {}", n, "file1.txt") };
	auto s2{ format("Read {0} bytes from {1}", n, "file1.txt") };
	auto s3{ format(L"从{1}中读取{0}个字节。", n, L"file1.txt") };

	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::wcout << s3 << std::endl;

}
