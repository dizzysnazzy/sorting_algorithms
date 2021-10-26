/*
 * File: 101-cocktail_sort_list.c
 * Auth: Dismas Kipchumba
 */

#include "sort.h"

/**
 * list_len - function returns length of list
 * @list: head of list
 *
 * Return: length
 */
size_t list_len(listint_t *list)
{
size_t len = 0;

while (list)
{
len++;
list = list->next;
}
return (len);
}

/**
 * switch_nodes - function swaps nodes at pointer p with the following node
 * @list: head of list
 * @p: pointer to node
 */
void nodeswitch(listint_t **list, listint_t **p)
{
listint_t *a, *b, *c, *d;

a = (*p)->prev;
b = *p;
c = (*p)->next;
d = (*p)->next->next;
b->next = d;
if (d)
d->prev = b;
c->next = b;
c->prev = b->prev;
if (a)
a->next = c;
else
*list = c;
b->prev = c;
*p = c;
}

/**
 *  cocktail_sort_list - function sorts a doubly linked list using
 * the cocktail sort algorithm
 * @list: pointer to list
 */
void cocktail_sort_list(listint_t **list)
{
listint_t *m;
int sort = 0;

if (!list || !*list || list_len(*list) < 2)
return;
m = *list;
while (!sort)
{
sort = 1;
while (m->next)
{
if (m->n > m->next->n)
{
sort = 0;
nodeswitch(list, &p);
print_list(*list);
}
else
m = m->next;
}
if (sort)
break;
m = m->prev;
while (m->prev)
{
if (m->n < m->prev->n)
{
sorted = 0;
m = m->prev;
nodeswitch(list, &p);
print_list(*list);
}
else
m = m->prev;
}
}
}
