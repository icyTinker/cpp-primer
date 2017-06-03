#include <iostream>
int main()
{
	int v1, v2 = 0;

	std::cout << "Enter two integers: " << std::endl;
	std::cin >> v1;
	std::cin >> v2;

	for ( int i = v1; i <= v2; ++i) //for if v1 is less than v2
		std::cout << i << " ";

	for ( int i = v1; i >= v2; --i) //for if v1 is greater than v2
		std::cout << i << " ";


return 0;

}