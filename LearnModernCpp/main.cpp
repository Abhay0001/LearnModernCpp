/*Build steps:
* 1.Preprocess
* 2.Compilation: checked for syntax and code converted to object code (.obj is generated)
* 3.Linking: the .obj is linked to standard libraries
* The output of Linking is the 'Executable file' that can be then executed from command line or from the explorer
*/

#include <iostream> // include a header file - helps with classes & objs for input/output; the # indicates preprocessing step during build

int add(int x, int y); // Prototype or declaration of a function

//namespace are used to wrap types, so that they are not visible outside; cout cin are members of iostream header, but under namespace std
//Open the std namespace
using namespace std;

//Execution of the prog starts at main
int main() {
	/*
	Primitive Types:
	1.Arithmetic
		1.1 integral (bool (1 byte), char (1 byte), wchar_t (2 byte), short (2 byte), int (4 byte), long (4 byte)
		1.2 floating (float (4 byte), double (8 byte))
	2.Void : these are special type used in pointers & functions

	Type Modifiers: signed, unsigned on integral types & short, long on floating types
	Type Qualifiers: const , volatile, static
	*/
	// Variable Declarations
	// Scalar types
	int i = 5, b, c = { 12 }, age;
	float x;
	char ch = 'a';
	bool flag = false;
	float f = 1.283f; // to be suffixed by f
	double d = 521.36;
	// Vector types
	int arr[5];
	int arr1[5] = {1,2,3,4,5}; // Curly braces can be used for any initialisation

	cout << "Hello, Welcome to " << "C++ !!" << endl; //insertion operators (inserted into 'cout' object from ostream header), cascading of operators;
	cout << arr1[3] << endl;

	cout << "Enter your age\n";
	cin >> age;
	cout << "Your age is " << age << endl;

	char name[512];
	cout << "Enter your name\n";
	// cin >> name; //reads only uptill an empty space;
	cin.getline(name, 64, '.');
	cout << "Your name is " << name << endl;
	// Return the exit code

	int s = add(i, c);
	cout << "Sum is " << s << endl;
	return 0; // this value will go to the OS.
}

