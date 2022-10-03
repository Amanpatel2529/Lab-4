#include <iostream>
using namespace std;\

//Program to print Fibonacci series up to 100.
//1,1,2,3,5,8,13...


int main() 
{
	int a = 0, b = 1, sum = 0;
	cout << a << endl;
	cout << b << endl;

	while (b < 100) 
    {
		sum = a + b;
		a = b;
		b = sum;

		if (b > 100) 
        {
			break;
		}

		cout << sum << endl;

	}

	system("pause");
    
	return 0;
}