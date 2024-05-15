# Hashing Intersection
## Output
```
set1 = { 5 2 8 6 3 }
set2 = { 0 5 19 27 8 11 44 1 }
The intersection of set1 and set2 is:  { 5 8 }  
```
## About
This program explores the applicable functions of using a hashtable and how it can be used to make searching for items more efficient. This program contains a class defining a hash table. This class has six public methods used to access and manipulate the data structure created by the class. These methods include isEmpty, hashFunction, insertItem, removeItem, contains, and printTable. These methods are explained more in detail in the following section. In the main program, two vectors are created and intitia;ized with a list of integers. One of the vectors is used to create a hash table using the classes insert function for each element in the vector. The hash table is then compared to the second vector to find any duplicate values in the two vectors declared in main. The main advantage of this method of searching is the potential time efficiency. A hash table has a time complexity of a combination of O(1) and O(n) depending on the size and structure used in the program. Since a hash function will return the index of the value or values, we can use that to instantly find a value or smaller list of values rather than having to look at every value. This in theory makes this O(1) since a hash table should never only have one cell, which would make the time complexity O(n).

## HashTable Class
- Members
  - BUCKETS : int : const : static
    - This determines the amount of "cells" or "buckets" in the hash table.
    - This number is also used in the hashing function.
  - table[ BUCKETS ] : list : int
    - This is the data structure that holds the elements of the hashmap.
- Methods
  - isEmpty() : bool : const
    - This method checks if 'table’ is empty and returns a boolean value.
  - hashFunction(item : int) : int : const
    - This function receives and integer and returns the calculated hash key using the equation, item % BUCKETS.
  - insertItem(item : int) : void
    - This function receives an integer and uses the hashFunction method to get a hash key.
    - Using the hash key the function will place 'item' in the 'table' list at the index of the hash key.
    - If there is already an 'item' at that index then it will be overwritten with the new 'item'
  - removeItem(item : int) : void
    - This function receives an integer and uses the hashFunction method to get a hash key.
    - The hash key is then used to find the index of the 'table' and remove the item if found at that index.
  - contains(int : item) : bool
    - This function receives an integer and uses the hashFunction method to get a hash key.
    - The 'table' is checked at the index of the hash key for 'item' and returns a boolean value.
  - printTable() : void : const
    - This function will print a formatted and easily readable version of 'table'


