#include "HashTable.h"

int main() {
	HashTable HT;

	vector<int> set1 = { 5, 2, 8, 6, 3 };
	vector<int> set2 = { 0, 5, 19, 27, 8, 11, 44, 1 };
	vector<int> result = {};

	for (int i = 0; i < set1.size(); i++)
	{
		HT.insertItem(set1[i]);
	}
	for (int i = 0; i < set2.size(); i++)
	{
		if (HT.contains(set2[i]))
		{
			result.push_back(set2[i]);
		}
	}
	cout << "The intersection of set1 and set2 is:  { ";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	cout << "}\n\n";
	return 0;
}

/* OUTPUT
The intersection of set1 and set2 is:  { 5 8 }
*/