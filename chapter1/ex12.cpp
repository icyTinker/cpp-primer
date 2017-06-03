#include <iostream>
int main()
{
	using namespace std;

	int sum = 0;
	for (int i = -100; i <= 100; ++i) //this for takes -100 down then back up to 0
		sum += i;

	std::cout << sum;

	return 0;
}