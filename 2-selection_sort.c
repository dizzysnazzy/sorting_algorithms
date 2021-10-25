#include "sort.h"
/**
 *selection_sort - sort array with Selection sort algorithm
 *@array: pointer to the array
 *@size: size of the array
 */
void selection_sort(int *array, size_t size)
{
int a = 0, b = 0;
size_t  i = 0, j = 0;

if (array == NULL || size == 0)
return;
while (i < size)
{
a = array[i];
b = j = i + 1;
while (j < size)
{
if (a > array[j])
{
a = array[j];
b = j;
}
j++;
}
if (a != array[i])
{
array[b] = array[i];
array[i] = a;
print_array(array, size);
}
i++;
}
}
