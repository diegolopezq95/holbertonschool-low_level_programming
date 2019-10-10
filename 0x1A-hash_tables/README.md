# 0x1A. C - Hash tables

0- Function that creates a hash table. Where size is the size of the array; 
Returns a pointer to the newly created hash table; If something went wrong, your function should return NULL

1- hash function implementing the djb2 algorithm.

2- Function that gives you the index of a key. Where key is the key and size is the size of the array of the hash table. This function should use the hash_djb2 function that you wrote earlier. Returns the index at which the key/value pair should be stored in the array of the hash table.

3- Function that adds an element to the hash table. Where ht is the hash table you want to add or update the key/value to key is the key. key can not be an empty string and value is the value associated with the key. value must be duplicated. value can be an empty string. Returns: 1 if it succeeded, 0 otherwise. In case of collision, add the new node at the beginning of the list.

4- Function that retrieves a value associated with a key. Where ht is the hash table you want to look into and key is the key you are looking for. Returns the value associated with the element, or NULL if key couldn’t be found

5- Function that prints a hash table. Where ht is the hash table. You should print the key/value in the order that they appear in the array of hash table:
   Order: array, list
If ht is NULL, don’t print anything

6- Function that deletes a hash table. Where ht is the hash table.

