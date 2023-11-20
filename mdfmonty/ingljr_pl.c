#include "monty.h"
/**
 * f_pall - prints the stack
 * @wzqhd: stack wzqhd
 * @wzqcnt: no used
 * Return: no return
*/
void wzqf_pll(stack_t **wzqhd, unsigned int wzqcnt)
{
	stack_t *h;
	(void)wzqcnt;

	h = *wzqhd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
