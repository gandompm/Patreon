#include <iostream>

/*
void main() {

	
	//in the both line below:
	//we have just allocated 200 bytes of memory
	int* array = new int[50];
	int** a2d = new int* [50]; 

	// we have allocated 50 arrays 
	// and stored the location of each array 
	// inside the a2d array 
	for (int i = 0; i < 50; i++)
		a2d[i] = new int[50]; 

	// for deleting a 2d array 
	// if we just write this line of code 
	// it's gona just release 200 bytes of memory 
	// and then we have memory leak 
	// because we don't have access to the actual data
	// and we don't have access to them 
	//delete[] a2d; 

	// so what we shoud do is: 
	for (int i = 0; i < 50; i++)
		delete[] a2d[i];
	delete[] a2d;


	// we have here an array of 5 arrays 
	// so we have 25 integers 
	// instead of having one continues buffer of holding 25 integers
	// in a row of memory 
	// we have 5 seperate buffers
	// they might not be allocated close to each other in memory 
	// so each time we have to jump to another part of memory for accessing 
	// another row, so we are wasting time
	int** a2d2 = new int* [5];
	for (int i = 0; i < 5; i++)
		a2d2[i] = new int[5];

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			a2d2[x][y] = 2; 
		}
	}

	// so this is going to be a lot slower to iterate throw this 25 integers 
	// than a single dimensional array, because that's gonna store all 25 integers in a row  
	int* array2 = new int[25];
	for (int y = 0; y < 25; y++)
	{
		array2[y] = 2;
	}
}
*/
