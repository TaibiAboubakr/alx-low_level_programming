#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int searching(int *array, int value, int low, int high);


#endif /* SEARCH_ALGOS */