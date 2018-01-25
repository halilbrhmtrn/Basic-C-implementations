node_t *search_sorted(node_t *headp, int item)
{
node_t *p;
/* start from the beginning of the list */
p = headp;
/* repeat until the end of the list is reached or a
value which is greater than or equal to the item is
found */
while (p != NULL && p->data < item)
/* pass to the next node */
p = p->next;
/* If the end of the list is reached or a value which
is greater than the item is found, item does not
exist in the list; return NULL. */
if (p == NULL || p->data > item)
return (NULL);
else
/* If a value which is equal to the item is found,
return the address of that node */
return (p);

}
