#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

void printfunc(int i) {
	std::cout << i << std::endl; 
}

void forEach(const std::vector<int>& numbers, void(*func)(int)) {
	for(int i : numbers)
	{
		func(i);
	}
}

void forEach2(const std::vector<int>& numbers,const std::function<void(int)>& func) {
	for (int i : numbers)
	{
		func(i);
	}
}

/*
void main() {

	std::vector<int> numbers = { 1,2,3,4 };
	// for each elements inside the vector, execute printfunc fucntion 
	forEach(numbers, printfunc); 

	// with using lambda
	forEach(numbers, [](int value) { std::cout << value << std::endl; });

	// capture all variable with value 
	forEach2(numbers, [=](int value) { std::cout << value << std::endl; });


	auto it = std::find_if(numbers.begin(), numbers.end(), [](int value) {return value > 3; });
	std::cout << *it << std::endl;
}

*/