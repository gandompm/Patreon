#include <iostream>
#include <string>
#include <vector>


/*
using macro in order to make printing a message easier
the preprocessor replace log with this line.
*/
#define LOG(x) std::cout<< x << std::endl; 

struct Vertex2 {
	int x, y, z;

	Vertex2(int x, int y, int z) : x(x), y(y), z(z){
	}

public:
	Vertex2(const Vertex2& vertex) : x(vertex.x), y(vertex.y), z(vertex.z) {
		LOG("copy constructor is being called!");
	}
};



/*
void main() {

	// optimising the usage of vectors: 

	std::vector<Vertex2> vertices;

	vertices.push_back(Vertex2( 1,2,3 ));
	vertices.push_back(Vertex2( 4,5,6 ));
	vertices.push_back(Vertex2( 4,5,6 ));
	// if we execute this we will call 6 times copy constructor!
	// each time it resize the vecotr 
	// one strategy could be: if we know that we want to push 
	// three objects, we can reserve the capacity as three

	std::cout << "the number of times that we will call copy constructors using reserve: " << std::endl; 
	std::vector<Vertex2> vertices2;
	vertices2.reserve(3); 
	vertices2.push_back(Vertex2(1, 2, 3));
	vertices2.push_back(Vertex2(4, 5, 6));
	vertices2.push_back(Vertex2(4, 5, 6));

	std::cout << "the number of times that we will call copy constructors using reserve and emplace: " << std::endl;
	std::vector<Vertex2> vertices3;
	vertices3.reserve(3);
	vertices3.emplace_back(1, 2, 3);
	vertices3.emplace_back(4, 5, 6);
	vertices3.emplace_back(4, 5, 6);
	// so this code is going to run a lot faster 

}

*/