#include <iostream>

using namespace std;

int Add(int a, int b) {
	return a + b;
}

double Add(double a, double b) {
	return a + b;
}

int main2() {
	auto result = Add(3.9, 5.2);
	cout << result << endl;
	return 0;
}