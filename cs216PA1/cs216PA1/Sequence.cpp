#include"Sequence.h"
#include<string>


void IntSequence::_read()
{
	data_seq.clear();
	string n;
	cout << "Enter the next element(Enter 'q' to stop) :" << endl;
	cin >> n;
	while (n != "q")
	{
		data_seq.push_back(atoi(n.c_str()));
		cout << "Enter the next element(Enter 'q' to stop) :" << endl;
		cin >> n;
	}
}

void IntSequence::_print()
{
	//cout << "Sequence : ";
	for (int i = 0; i < data_seq.size(); i++)
	{
		cout << data_seq[i]<<" ";
	}
	cout << endl;
}

void IntSequence::_sort()
{
	t:
	cout << "1. Insertion sort" << endl;
	cout << "2. Selection sort" << endl;
	cout << "3. Bubble sort" << endl;
	cout << "4. Quit" << endl;
	char choice;
	cin >> choice;
	switch (choice)
	{
	case '1': insertionSort(0); break;
	case '2': selectionSort(); break;
	case '3': bubbleSort(); break;
	case '4': return; break;
	default :cout << "Invalid Option" << endl; goto t;
	}
}

void IntSequence::_search()
{
t:
	cout << "1. Sequenctial search" << endl;
	cout << "2. Binary search" << endl;
	cout << "3. Quit" << endl;
	char choice;
	cin >> choice;
	switch (choice)
	{
	case '1': sequentialSearch(); break;
	case '2': binarySearch(); break;
	case '3': return; break;
	default:cout << "Invalid Option" << endl; goto t;
	}
}

void IntSequence::selectionSort()
{
	cout << "===Selection Sort====================================" << endl;
	for (int x = 0; x<data_seq.size()-1; x++)
	{
		int index_of_min = x;
		for (int y = x; y<data_seq.size(); y++)
		{
			if (data_seq[index_of_min]>data_seq[y])
			{
				index_of_min = y;
			}
		}
		int temp = data_seq[x];
		data_seq[x] = data_seq[index_of_min];
		data_seq[index_of_min] = temp;
		cout << "Min " << data_seq[x] << ", swap with " << data_seq[index_of_min] << ": ";
		_print();
		cout << endl;
	}
	cout << "Sequence: ";
	_print();
	cout << endl;
}


void IntSequence::insertionSort(int m)
{
	cout << "===Insertion Sort====================================" << endl;
	int temp, i,j;
	for (i = 1; i < data_seq.size(); i++)
	{
		for (j = i; j >= 1; j--)
		{
			if (data_seq[j] < data_seq[j - 1])
			{
				temp = data_seq[j];
				data_seq[j] = data_seq[j - 1];
				data_seq[j - 1] = temp;
			}
			else
				break;
		}
		if (!m)
		{
			cout << "Insert " << temp << ": ";
			_print();
			cout << endl;
		}
	}
	if (!m)
	{
		cout << "Sequence: ";
		_print();
		cout << endl;
	}
}

void IntSequence::bubbleSort()
{
	cout << "===Bubble Sort===================================="<<endl;
	int p, j, temp;
	for (p = 1; p <= data_seq.size(); p++)             // Loop for Pass
	{
		for (j = 0; j < data_seq.size() - 1; j++)
		{
			if (data_seq[j]>data_seq[j + 1])
			{
				temp = data_seq[j];                      // Interchange Values
				data_seq[j] = data_seq[j + 1];
				data_seq[j + 1] = temp;
			}
		}
		cout << "Iteration " << p << ": ";
		_print();
		cout << endl;
	}
	cout << "Sequence: ";
	_print();
	cout << endl;
}


void IntSequence::sequentialSearch()
{
	cout << "Enter the key to find:"<<endl;
	int n;
	cin >> n;
	for (int i = 0; i < data_seq.size(); i++)
	{
		if (data_seq[i] == n)
		{
			cout << "Sequence: "; _print(); cout << endl;
			cout << "Key found at index " << i << endl;
			cout << "Search with " << i + 1 << " comparison(s)" << endl;
			return;
		}
	}
	cout << "Not Found" << endl;
}

void IntSequence::binarySearch()
{
	insertionSort(1);
	cout << "Enter the key to find:" << endl;
	int r;
	cin >> r;
	int count = 0;
	int initial = 0;
	int final = data_seq.size();
	int mid;
	int location = -5;
	while (initial <= final)
	{
		count++;
		mid = (initial + final) / 2;

		if (data_seq[mid] == r)
		{
			location = mid;
			break;
		}
		if (r<data_seq[mid])
			final = mid - 1;

		if (r>data_seq[mid])
			initial = mid + 1;
	}
	if (location == -5)
		cout << "Not Found" << endl;
	else
	{
		cout << "Sequence: "; _print(); cout << endl;
		cout << "Key found at index " << location << endl;
		cout << "Search with " << count << " comparison(s)" << endl;
	}
}