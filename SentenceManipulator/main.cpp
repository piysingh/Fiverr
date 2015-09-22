#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

string processWord(string word)
{
	string modifiedWord = "",temp;
	for (int i = 0; i < word.size(); i++)
	{
		temp = word;
		temp.insert(i, "*");

		if (i == word.size() - 1)
			modifiedWord += word + "*";
		else
			modifiedWord += temp;
		if (i != word.size() - 1)
			modifiedWord += '|';
			
	}
	modifiedWord = "$(" + word + "|$(" + modifiedWord +")#)#";
	//cout << modifiedWord << endl;
	return modifiedWord;
}

int main()
{
	string word;
	ifstream input;
	ofstream output;
	input.open("input.txt");
	output.open("output.txt");
	while (input>>word)
	{
		string finalWord = processWord(word);
		cout << finalWord;
		output << finalWord + "\n";
	}
	cin.get();
	return 0;
}