#include <iostream>
#include <string>
#include <vector>

/*
our isue is how to reutrn multilple type of variable in a function? 
how to deal with that? 
*/

/*
one way would be to set the retun type as void and pass paramethers by reference
*/
void function(std::string& str1, std::string& str2) {


	// and instead of retuning, modifying the paramethers. 
	str1 = "string 1";
	str2 = "string 2";
}

/*
void main() {

	std::string str1;
	std::string str2; 

	// one of the most optimal way 
	// because there is no string copy 
	function(str1, str2); 
}
*/

