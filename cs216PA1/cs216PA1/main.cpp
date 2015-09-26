#include<iostream>
#include"Sequence.h"

int main()
{
	IntSequence seq;
	while (1)
	{
		char choice;
		cout << "1. Read" << endl;
		cout << "2. Print" << endl;
		cout << "3. Sort" << endl;
		cout << "4. Search" << endl;
		cout << "5. Quit" << endl;
		cin >> choice;
		switch (choice)
		{
		case '1': seq._read(); break;
		case '2': cout << "Sequence: "; seq._print(); break;
		case '3': seq._sort(); break;
		case '4': seq._search(); break;
		case '5': goto t; break;
		default:cout << "Invalid Option!" << endl; 
		}
	}
t:
	cout << "Thank you for using this program, bye." << endl;
}