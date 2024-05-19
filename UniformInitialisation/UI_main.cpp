#include <iostream>

int main7() {
	int a1; //Uninitialized
	int a2 = 0; //Copy initialization
	int a3(6); // Direct initialization
	std::string s1;
	std::string s2("Hello");

	char d1[8]; //uninitialized
	char d2[8] = { '1','2','3','4','5','6','7','8' }; //copy initialization //aggregate initializzation
	char d3[8] = { '\0' };//copy initialization
	char d4[8] = { "abcdefg" };//copy initialization

	//Uniform initializations {}
	int b1{};//Value initialization, zero
	int b3{5};//Direct initialization

	char e1[8]{}; //Value initialization
	char e3[8]{ "Hello" };

	return 0;



}