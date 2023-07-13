
# 0x0C-more_malloc_free - README

This directory contains solutions to C programming tasks related to dynamic memory allocation using malloc and free.

## Files
Below is a brief description of each file present in this directory:

- 0-malloc_checked.c: This file contains a function malloc_checked that wraps around the malloc function and checks if the allocation is successful. If malloc fails to allocate memory, the function terminates the program with a status value of 98.
- 1-string_nconcat.c: This file contains a function string_nconcat that concatenates two strings, considering only the first n bytes of the second string. The function dynamically allocates memory for the new concatenated string.
- 2-calloc.c: This file contains a function _calloc that emulates the behavior of the calloc function. The function dynamically allocates memory for an array and initializes all elements to 0.
- 3-array_range.c: This file contains a function array_range that creates an array of integers containing a range of values from min to max, inclusive. The function dynamically allocates memory for the array.
- 4- 100-realloc.c : function that reallocates a memory block using malloc and free