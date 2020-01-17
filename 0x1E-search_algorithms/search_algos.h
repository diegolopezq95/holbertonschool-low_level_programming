#ifndef _SEARCH_HEADER_
#define _SEARCH_HEADER_
#include <stdio.h>
#include <stdlib.h>

/* Prototype Functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t lo, size_t hi, int value);

int jump_search(int *array, size_t size, int value);

int interpolation_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);
#endif
