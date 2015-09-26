#include<iostream>
using namespace std;

int main()
{
	double n;
	int count=0;
	cout << "Enter a number: ";
	cin >> n;
	while (n != -1)
	{
		cout <<"n*n " <<n*n << "\t";
		cout << "n/n "<<n / n <<"\t";
		cout << "(n+3)/5 " << (n + 3) / 5<<"\t";
		cout << "[ ( (n+3)/5 ) + ( (n+7)/2 ) ] " << (((n + 3) / 5) + ((n + 7) / 2)) << endl;
		count++;
		cout << "\nEnter a number: ";
		cin >> n;
	}
	cout << "Counter : " << count << endl;
	
}