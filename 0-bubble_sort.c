/*
 * File: 0-bubble_sort.c
 * Auth: Dismas Kipchumba
 */

#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
  unsigned int i, j, sizee;
int swp;
 
sizee = size;
if (sizee < 2 || array == NULL)
return;

for (i = 0; i < sizee; i++)
{
for (j = 0; j < sizee - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swp = array[j];
array[j] = array[j + 1];
array[j + 1] = swp;
print_array(array, size);
}
}
}
}
