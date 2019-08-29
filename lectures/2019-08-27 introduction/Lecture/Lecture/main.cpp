#include <iostream>
#include <string>
using namespace std;

//1. (p. 73) Prompt user for a string. Remove adjacent duplicate words.
//I I went to the the store this morning -> I went to the store this morning
string removeAdjacentDuplicates(string original)
{
	string current;
	string next;
	string result;
	for (int i = 0; i < original.length() - 1; i++)
	{
		if (original[i] == ' ')
		{

		}
		else
		{
			
		}
		
		int space_index = original.find(' ', i);
		int space_index2 = original.find(' ', i+1);

		string word = original.substr(i, space_index);

		//string temp = original.substr(0, i);
		cout << space_index << endl;
	}
	return result;
}

int main(void)
{
	removeAdjacentDuplicates("I I went to the the store this morning");
}