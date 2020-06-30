#include <thread>
#include <iostream>

static bool isFinished = false; 

/*
this is going to be a fucntion that happens on another thread. 
*/
void workerMethod() {

	using namespace std::literals::chrono_literals;

	// run for ever until the value of isFinished will be changed to true 
	// on the main thread 
	while (!isFinished)
	{
		std::cout << "worker thread is executing..."<<std::endl;
		std::this_thread::sleep_for(1s);
	}
}

/*
void main() {

	// pass the function pointer as an argument 
	std::thread worker(workerMethod);

	std::cin.get(); 
	isFinished = true;

	// wait on the current thread, until the worker thread finishes it's work.
	// on the main thread wait for worker thread to finish all it's execution
	// before continuing what ever main thread has 
	worker.join(); 

	std::cout << "worker thread is done!" << std::endl;

}

*/