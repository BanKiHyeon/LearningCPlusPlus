﻿#include <experimental/generator>
#include <chrono>
#include <iostream>
#include <iomanip>

using namespace std;
using namespace std::chrono;

experimental::generator<int> getSequenceGenerator(
	int startValue, int numberOfValues)
{
	for (int i{ startValue }; i < startValue + numberOfValues; ++i) {
		time_t tt{ system_clock::to_time_t(system_clock::now()) };
		tm t;
		localtime_s(&t, &tt);
		cout << put_time(&t, "%H:%M:%S") << ": ";
		co_yield i;
	}
}

int main()
{
	auto gen{ getSequenceGenerator(10, 5) };
	for (const auto& value : gen) {
		cout << value << " (Press enter for next value)";
		cin.ignore();
	}
}
