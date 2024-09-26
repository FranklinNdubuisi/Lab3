#include <iostream>
int main() {

	int x;
	int y;
	std::cout << "Enter a value for X: ";
	std::cin >> x;

	std::cout << "Enter a value for Y: ";
	std::cin >> y;

	int *z = &x; //serves as a pointer to x;
	int *w = &y; //serves as a pointer to y;

	int add = *z + *w; //adds the two values using their pointer;

	std::cout << "x is :  " << x<<'\n';
	std::cout << " y is : " << y << '\n';
	std::cout << "The addition is :  " << add << '\n';
	

	return 0;
}