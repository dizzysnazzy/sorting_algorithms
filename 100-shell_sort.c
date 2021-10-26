/*
 * File: 100-shell_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

/**
 * shell_sort - function sorts an array of integers using
 * the shell sort algorithm with Knuth sequence
 * @array: the array of integers
 * @size: size of the array
 *
 * Return: none
 */
void shell_sort(int *array, size_t size)
{
size_t space = 0, j, i;
int tmp;

if (size < 2)
return;

while ((space = space * 3 + 1) < size)
;

space = (space - 1) / 3;

for (; space > 0; space = (space - 1) / 3)
{
for (i = space; i < size; i++)
{
tmp = array[i];
for (j = i; j >= space && tmp <= array[j - space]; j -= space)
array[j] = array[j - space];
array[j] = tmp;
}
print_array(array, size);
}
}
