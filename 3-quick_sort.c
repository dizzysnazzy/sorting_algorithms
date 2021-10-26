/*
 * File: 1-insertion_sort_list.c
 * Auth: Dismas Kipchumba
 */

#include "sort.h"

int lomutopart(int *array, int start, int end, size_t size);
/**
 * recur - recursively does quick sort
 * @array: the array to be sorted
 * @start: the first element of the array
 * @end: the pivot for the array
 * @size: number of elements of the array
 */
void recur(int *array, int start, int end, size_t size)
{
size_t index = 0;

if (start < end)
{
index = lomutopart(array, start, end, size);
if (index > 0)
recur(array, start, index - 1, size);
if (index != size)
recur(array, index + 1, end, size);
}
}


/**
 * lomutopart - it does Lomuto partition
 * @array: the array to be sorted
 * @start: the first element of the array
 * @end: the pivot for the array
 * @size: number of elements of the array
 *
 * Return: index for the sort
 */
int lomutopart(int *array, int start, int end, size_t size)
{
int pivot = array[end], index = start - 1, i, tmp;

for (i = start; i < end; i++)
{
if (array[i] <= pivot)
{
index++;
if (index != i)
{
tmp = array[i];
array[i] = array[index];
array[index] = tmp;
print_array(array, size);
}
}
}
if (pivot < array[index + 1])
{
tmp = array[index + 1];
array[index + 1] = array[end];
array[end] = tmp;
print_array(array, size);
}
return (index + 1);
}

/**
 * quick_sort - a function that sorts an array by quick sort
 * @array: the array to be sorted
 * @size: number of elements that the array has
 */
void quick_sort(int *array, size_t size)
{
int start = 0, end = size - 1;

if (array != NULL && size != 0)
recur(array, start, end, size);
}
