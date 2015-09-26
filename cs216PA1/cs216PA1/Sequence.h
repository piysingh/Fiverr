#include<iostream>
#include<vector>
using namespace std;

#ifndef _INTSEQUENCE_
#define _INTSEQUENCE_


class IntSequence
{
public:
	
	void _read(); // read data elements
	void _print(); // print data elements
	void _sort(); // sort the sequence
	void _search(); // search for in the sequence
	void insertionSort(int);
	void bubbleSort();
	void selectionSort();
	void sequentialSearch();
	void binarySearch();
private:
	vector<int> data_seq; // vector of data elements
	int count; // actual num of elements
};

#endif // !_INTSEQUENCE_