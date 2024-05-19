#include <iostream>
using namespace std;

int main() {
	float arr[] = {1,2,3,6.3f,5,11,12};
	for (const auto &i : arr) {
		int x = i*2;
		if (x > 5) {
			cout << x << endl;
		}	
	}

	auto beg = std::begin(arr);
	auto end = std::end(arr);

	while (beg != end) {
		cout << *beg << endl;
		++beg;
	}
	cout << arr[0];
	return 0;
}