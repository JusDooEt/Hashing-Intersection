#include "HashTable.h"

bool HashTable::isEmpty() const
{
	for (int i = 0; i < BUCKETS; i++)
	{
		if (table[i].size() != 0)
		{
			return false;
		}
	}
	return true;
}

int HashTable::hashFunction(int item) const
{
	return (item % BUCKETS);
}

void HashTable::insertItem(int item)
{
	int hashValue = hashFunction(item);
	bool itemInTable = false;
	list<int>& cell = table[hashValue];
	list<int>::iterator cItr = cell.begin();

	for (cItr = cell.begin(); cItr != cell.end(); cItr++)
	{
		if (*cItr == item)
		{
			cout << "Item already in table!  "
				<< "Overwriting with your version!\n";
			*cItr = item;
			itemInTable = true;
			break;
		}
	}
	if (!itemInTable)
	{
		if (cell.size() > 0)
		{
			cout << "Collision! "
				<< "Adding to linked list via separate chaining...\n";
		}
		cell.push_back(item);
	}
}

void HashTable::removeItem(int item)
{
	int hashValue = hashFunction(item);
	bool itemInTable = false;
	list<int>& cell = table[hashValue];
	list<int>::iterator cItr = cell.begin();

	for (cItr = cell.begin(); cItr != cell.end(); cItr++)
	{
		if (*cItr == item)
		{
			cItr = cell.erase(cItr);
			cout << "Item deleted.\n";
			return;
		}
	}
	cout << "Item not found!\n";
}

bool HashTable::contains(int item)
{
	int hashValue = hashFunction(item);
	bool itemInTable = false;
	list<int>& cell = table[hashValue];
	list<int>::iterator cItr = cell.begin();

	for (cItr = cell.begin(); cItr != cell.end(); cItr++)
	{
		if (*cItr == item)
		{
			return true;
		}
	}
	return false;
}

void HashTable::printTable() const
{
	for (int i = 0; i < BUCKETS; i++)
	{
		if (table[i].size() != 0)
		{
			for (auto it = table[i].begin(); it != table[i].end(); it++)
			{
				cout << *it << std::endl;
			}
		}
	}
}
