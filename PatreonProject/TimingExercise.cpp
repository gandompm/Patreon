#include <iostream>
#include <chrono>

/*
one way to find out the time of execution of a function could be this: 
if you care about performance, to see how fast your code performs.
*/
struct Timer 
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		std::cout << "Timer took: "<< duration.count()*1000.0f << " ms" << std::endl; 
	}
};

/*
we want to find out how long does it take write Hello to concole 
one hundred times 
*/
void function() {
	Timer timer; 

	for (int i = 0; i < 100; i++)
		std::cout << "Hello " << std::endl;
}
/*
void main() {

	function();

}
*/
