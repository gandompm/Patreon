#include <iostream>
#include <string>
#include <vector>

struct Vertex{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream,const Vertex& vertex) {
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

/* 
when we want to pass these vectors into functions, 
we should make sure that we pass it by const reference.
by doing that we are ensuring thar we are not copying the entire array. 
*/
void function(const std::vector<Vertex>& vertices) {

}

/*
void main() {

	std::vector<Vertex> vertices; 

	vertices.push_back({ 1,2,3 });
	vertices.push_back({ 4,5,6 });

	function(vertices); 


	//this is not optimal, 
	//because this is going to copyint each vertices 
	for (Vertex vertex : vertices) {
		std::cout << vertex<< std::endl;
	}
	//so we want to avoid copying, when it's possible. 
	//so we use refrence and don't copy vertices 
	for (Vertex& vertex : vertices) {
		std::cout << vertex << std::endl;
	}

	//vertices.clear(); 
	// to erase the second element 
	vertices.erase(vertices.begin() + 1);

	for (Vertex& vertex : vertices) {
		std::cout << vertex << std::endl;
	}


	// optimising the usage of vectors: 


}
*/
