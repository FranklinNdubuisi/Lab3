#include <iostream>

int main() {

	int a =5;
	int *y = &a; // pointer to a ;

	typedef int* VEC;
	VEC v = &a;

	typedef VEC* MATRIX;
	MATRIX m = &v;

	std::cout << " The value of a is : " << a <<"\n";
	std::cout << " The value of a is : " << *v<<"\n";
	std::cout << " The value of a is : " << **m<<"\n";

	return 0;

}