#include<iostream>;

void ThirdPartyLibraryMethod(char* str) {
	std::cout << str << std::endl;
}

void f(const char* str)
{
	ThirdPartyLibraryMethod(const_cast<char*>(str));
	
	// error
	//ThirdPartyLibraryMethod(str);
	//ThirdPartyLibraryMethod("zxc");
}

int main()
{
	f("Hello World");
}
