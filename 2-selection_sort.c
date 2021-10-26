/*
 * File: 2-selection_sort.c
 * Auth: Dismas Kipchumba
 */

#include "sort.h"
/**
 *selection_sort - sort array with Selection sort algorithm
 *@array: pointer to the array
 *@size: size of the array
 */
void selection_sort(int *array, size_t size)
{
int tmp1 = 0, tmp2 = 0;
size_t  i = 0, j = 0;

if (array == NULL || size == 0)
return;
while (i < size)
{
tmp1 = array[i];
tmp2 = j = i + 1;
while (j < size)
{
if (tmp1 > array[j])
{
tmp1 = array[j];
tmp2 = j;
}
j++;
}
if (tmp1 != array[i])
{
array[tmp2] = array[i];
array[i] = tmp1;
print_array(array, size);
}
i++;
}
}
