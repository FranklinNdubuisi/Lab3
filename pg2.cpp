#include <iostream>
int main() {

	int x = 1;
	int y = 2;

	int *z = &x;
	int *w = &y;

	int add = *z + *w;

	std::cout << "x is :  " << x<<'\n';
	std::cout << " y is : " << y << '\n';
	std::cout << "The addition is :  " << add << '\n';
	

	return 0;
}