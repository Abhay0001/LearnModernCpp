#include <iostream>
// using namespace std;

int factorial(int x) {
	int res = 1;
	for (int i = 1; i <= x; i++) {
		res *= i;
	}
	return res;
}

int main1() {
	int i;
	std::cout << "Enter a natural number\n";
	std::cin >> i;
	int result = factorial(i);
	std::cout << "Factorial of " << i << " is " << result << std::endl;
	return 0;
}