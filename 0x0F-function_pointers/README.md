# 0x0F. C - Function pointers

0- Function that prints a name.

1- Function that executes a function given as a parameter on each element of an array. Where size is the size of the array
and action is a pointer to the function you need to use

2- Function that searches for an integer. Where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values; int_index returns the index of the first element for which the cmp function does not return 0; If no element matches, return -1; If size <= 0, return -1

3- Program that performs simple operations. Usage: calc num1 operator num2. Assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int operator is one of the following:
+: addition
-: subtraction
*: multiplication
/: division
%: modulo
Assume that the result of all operations can be stored in an int
if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100.

       3-calc.h: This file contain all the function prototypes and data structures used by the program.

       3-op_functions.c: This file contain the 5 following functions (not more):
		  op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
		  op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
		  op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
		  op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
		  op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
   
       3-get_op_func.c: This file contain the function that selects the correct function to perform the operation asked by the user.
   		  Prototype: int (*get_op_func(char *s))(int, int);
   		  where s is the operator passed as argument to the program
   		  This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get                  _op_func("+") s   hould return a pointer to the function op_add
   		  If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL.
  
       3-main.c: This file contain your main function only.