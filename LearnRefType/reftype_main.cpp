#include <iostream>
using namespace std;

void swap_ptr(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

void swap_ref(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void print_value(int *ptr) {
	if(ptr != nullptr)
		cout << *ptr;
}
// a reference will always need an initializer referent
int main() {
	//Variable is an 'identifier of a memory location'
	int x = 10;
	int &ref = x;
	ref = 11;
	int y = 12;
	ref = y;

	//cout << x << endl;
	//cout << ref << endl;

	int a = 5, b = 6;
	swap_ptr(&a, &b);
	cout << a << endl;
	cout << b << endl;

	swap_ref(a, b);
	cout << a << endl;
	cout << b << endl;

	print_value(&a);


	return 0;
}