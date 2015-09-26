#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "Enter N :";
	cin >> i;
    n = 1;
	cout << "%C++ Ordinals " << i << endl;
	while (n <= i)
	{
		
		if (n % 100 == 11 || n % 100 == 12 || n % 100 == 13)
		{
			cout << n << "th" << " Hello" << endl;
		}
		else if (n % 10 == 1)
		{
			cout << n << "st" << " Hello" << endl;
		}
		else if (n % 10 == 2)
		{
			cout << n << "nd" << " Hello" << endl;
		}
		else if (n % 10 == 3)
		{
			cout << n << "rd" << " Hello" << endl;
		}
		else
		{
			cout << n << "th" << " Hello" << endl;
		}
		n++;
	}
}