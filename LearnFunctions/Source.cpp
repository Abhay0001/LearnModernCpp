#include <iostream>
#include "mathfun.h"
using namespace std;


int main6() { //Global function since defined in its source ('.ccp') file
	int i = 4, j = 5;
	float k = 5.1f;
	int result = add(i, j);
	cout << "Sum is " << result << endl;

	float res = multiply(i, k);
	cout << "Product is " << res << endl;
	return 0;
}

