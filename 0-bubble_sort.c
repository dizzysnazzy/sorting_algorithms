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
int tmp;
size_t i = 0, j = 0;

for (i = 0; i < size; i++)
{
for (j = 1; j < size; j++)
{
if (array[j - 1] > array[j])
{
tmp = array[j - 1];
array[j - 1] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
}
}
