#include <iostream>
#include <string>


class String {

private:
	// points to the buffer 
	char* m_Buffer; 
	// to define how big the buffer is
	unsigned int m_size; 
public:
	String(const char* string) {
		// using strlen to get the size of string 
		m_size = strlen(string); 
		/*
			 the size of the strig should be puls 1 
			because of the termination char.
			otherwise we don't have the null termination char
		*/
		m_Buffer = new char[m_size + 1]; 
		// instead of using a for loop and assign it one by one
		// using memcpy 
		memcpy(m_Buffer, string, m_size);
		// manually adding a termination char at the end
		m_Buffer[m_size] = 0;
	}
	// the copy constructor that takes in a const refrence to the same class
	String(const String& other) 
	:m_size(other.m_size){
		m_Buffer = new char[m_size + 1];
		// we add the size of the char to 1, because we already 
		// know that the other char has already the null terminator
		memcpy(m_Buffer, other.m_Buffer, m_size + 1);
	}


	// to avoid memory leak we need to delete the allocated memory
	// if we we used smart pointers, we didn't have to
	~String() {
		delete [] m_Buffer;
	}

	// to return the address of a char of buffer
	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string) {
	// since this is a friend function, we have access to it's private members 
	stream << string.m_Buffer;
	return stream; 
}

/*
if we define the parameter in this way:
void printString(String string){}
in this case, every time we call this function,
copy constructor will be called,
we allocate memory on the heap and at the end we free it.

so we shoud pass the existing string to this function: 
so we can just refrence the existing one
and then we mark it as const, we don't want to edit this

so what I'm trying to tell you is:
always pass your object by const reference, always :) 
*/
void printString(const String &string) {
	std::cout << string <<std::endl;
}

/*
int main()
{
	String string = "cherno";
	String secondString = string;

	secondString[2] = 'a';

	printString(string); 

	std::cout << string << std::endl;
	std::cout << secondString << std::endl;
}

*/