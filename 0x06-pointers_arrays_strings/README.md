# 0x06. C - More pointers, arrays and strings

0- Function that concatenates two strings. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte

1- Function that concatenates two strings. The _strncat function is similar to the _strcat function, except that; it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes

2- Function that copies a string.

3- Function that compares two strings.

4- Function that reverses the content of an array of integers; n is the number of elements of the array

5- Function that changes all lowercase letters of a string to uppercase.

6- Function that capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7- Function that encodes a string into 1337.

Letters a and A should be replaced by 4;
Letters e and E should be replaced by 3;
Letters o and O should be replaced by 0;
Letters t and T should be replaced by 7;
Letters l and L should be replaced by 1;

8- Function that encodes a string using rot13.

100- Function that prints an integer.

101- Add one line to this code, so that the program prints a[2] = 98, followed by a new line.

102- Function that adds two numbers. 

Where n1 and n2 are the two numbers;
r is the buffer that the function will use to store the result;
size_r is the buffer size;
The function returns a pointer to the result;
Aassume that you will always get positive numbers, or 0;
Assume that there will be only digits in the strings n1 and n2
n1 and n2 will never be empty;
If the result can not be stored in r the function must return 0;

103- Function that prints a buffer.

The function must print the content of size bytes of the buffer pointed by b;
The output should print 10 bytes per line;
Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0;
Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space;
Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
Each line ends with a new line \n;
If size is 0 or less, the output should be a new line only \n;