#include <iostream>
using namespace std;
/*Types
1.Primitive types
2.User defined Types
3.Pointer types
*/

/*Pointer Type
Points to another type
Holds the memory address of another variable
Used for 'indirect' access to other variables
Need not be initialised, but good practice is to initialize
Declared with * operator
int *ptr;
int *p1, *p2, *p3, p4;
*/

/*
& is the 'address of' operator. When applied to any variable, we get the address of that variable (the location where it is stored in memory)

*/
int main8() {
	int x{10};
	cout << &x << endl;
	cout << x << endl;
	int *ptr = &x;
	cout << ptr << endl;

	*ptr = 5;//Here * is the 'dereference operator'
	cout << x << endl;
	int y = *ptr; //Here * is the 'dereference operator'
	cout << y << " value of y" << endl;

	//Null Pointer can be used to initialize pointer types
	int *p = nullptr;
	cout << p << endl;

	//Cannot read from a null pointer (dereference from a null ptr), Only a warning
	cout << *p << endl;
	*ptr = 100;

	return 0;
}