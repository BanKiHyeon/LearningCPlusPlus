#include <memory>

using namespace std;

class MyClass {};

int main()
{
	allocator<MyClass> alloc;

	auto* memory{ alloc.allocate(1) };

	new(memory) MyClass{};

	destroy_at(memory);

	alloc.deallocate(memory, 1);
	memory = nullptr;
}
