#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

class HashTable
{
private:
	static const int BUCKETS = 7;		// # of buckets
	list<int> table[BUCKETS];
public:
	bool isEmpty() const;
	int hashFunction(int item) const;
	void insertItem(int item);
	void removeItem(int item);
	bool contains(int item);
	void printTable() const;
};


