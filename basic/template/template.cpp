#include <cstddef>     
#include <iostream>    
#include <array>       

using namespace std;

static const size_t NOT_FOUND{ static_cast<size_t>(-1) };

template<typename T>
size_t Find(const T& value, const T* arr, size_t size) {
	for (size_t i{ 0 }; i < size; i++) {
		if (arr[i] == value) {
			return i;
		}
	}
	return NOT_FOUND;
}

template <typename T, size_t N>
size_t Find(const T& value, const T(&arr)[N])
{
	return Find(value, arr, N);
}

int main()
{
	int myInt{ 3 }, intArray[]{ 1,2,3,4 };
	const size_t sizeIntArray{ size(intArray) };

	size_t res;
	res = Find(myInt, intArray, sizeIntArray);
	res = Find<int>(myInt, intArray, sizeIntArray);
	res = Find(myInt, intArray);

	if (res != NOT_FOUND) { cout << res << endl; }    
	else { cout << "Not found" << endl; }

	double myDouble{ 5.6 }, doubleArray[]{ 1.2, 3.4, 5.7, 7.5 };
	const size_t sizeDoubleArray{ size(doubleArray) }; 

	res = Find(myDouble, doubleArray, sizeDoubleArray);        
	res = Find<double>(myDouble, doubleArray, sizeDoubleArray); 
	if (res != NOT_FOUND) { cout << res << endl; }    
	else { cout << "Not found" << endl; }

}
