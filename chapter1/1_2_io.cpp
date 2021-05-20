#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1+v2 << std::endl;

	std::cout << "Ex 1.3: ";
	std::cout << "Hello, World" << std::endl;

	std::cout << "Ex 1.4: ";
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;

	std::cout << "Ex 1.5: ";
	std::cout << "The sum of " << std::endl;
	std::cout << v1 << std::endl;
	std::cout << "and " << std::endl;
	std::cout << v2 << std::endl;
	std::cout << "is " << std::endl;
	std::cout << v1+v2 << std::endl;

	return 0;
}
