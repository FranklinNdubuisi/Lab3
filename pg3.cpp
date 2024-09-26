#include <iostream>

int main() {

	int a =5;
	int *y = &a;

	typedef int* VEC;
	VEC v = &a;

	typedef VEC* MATRIX;
	MATRIX m = &v;

	std::cout << " The value of a is : " << a;
	std::cout << " The value of a is : " << v;
	std::cout << " The value of a is : " << m;

	return 0;

}