#include <iostream>
#include <string>


class Entity {

public:
	void print() {
		std::cout << "Hi, Parham" << std::endl; 
	}
};

class ScopedPointer {
private:
	Entity* m_Obj; 

public:
	ScopedPointer(Entity* newEntity): m_Obj(newEntity) {
	}

	~ScopedPointer() {
		delete m_Obj; 
	}

	Entity* operator->() {
		return m_Obj;
	}
};

struct  Vector3
{
	float x, y, z;
};


/*
void main() {

	Entity entity; 
	entity.print(); 

	Entity* pointer = &entity; 
	(*pointer).print();
	// instead of refrencing the pointer and then calling the print
	// we can substitute all of that by using arrow 
	pointer->print(); 

	ScopedPointer newEntity = new Entity(); 
	// so we overloaded the -> operator in order to get the entity object
	// and call print function 
	newEntity->print();

	// we want to find out what is the offset of the y variable in the struct 
	// so we use arrow operator to get the offset of a certain variable in memory
	int offset = (int)&((Vector3*)nullptr)->y;
	std::cout << offset << std::endl;

}
*/

