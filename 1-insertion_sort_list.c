/*
 * File: 1-insertion_sort_list.c
 * Auth: Dismas Kipchumba
 */

#include "sort.h"

/**
 * len_list - returns the length of a linked list
 * @p: pointer to the list
 *
 * Return: length of list
 */
int len_list(listint_t *p)
{
int len = 0;

while (p)
{
len++;
p = p->next;
}
return (len);
}

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */
void insertion_sort_list(listint_t **list)
{
listint_t *curr = NULL, *first = NULL;
listint_t *second = NULL, *third = NULL, *fourth = NULL;

if (!list || !(*list) || len_list(*list) < 2)
return;

curr = *list;

while (curr)
{
if (curr->prev && curr->n < curr->prev->n)
{
first = curr->prev->prev;
second = curr->prev;
third = curr;
fourth = curr->next;

second->next = fourth;
if (fourth)
fourth->prev = second;
third->next = second;
third->prev = first;
if (first)
first->next = third;
else
*list = third;
second->prev = third;
curr = *list;
print_list(*list);
continue;
}
else
curr = curr->next;
}
}
