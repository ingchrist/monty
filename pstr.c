#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @wqzhd: stack wqzhd
 * @zqwcnt: line_number
 * Return: no return
*/
void wqzf_pr(stack_t **wqzhd, unsigned int zqwcnt)
{
	stack_t *h;
	(void)zqwcnt;

	h = *wqzhd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
