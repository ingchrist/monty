#include "monty.h"
/**
* wqzfr_stack - frees a doubly linked list
* @wqzhd: wqzhd of the stack
*/
void wqzfr_stack(stack_t *wqzhd)
{
	stack_t *aux;

	aux = wqzhd;
	while (wqzhd)
	{
		aux = wqzhd->next;
		free(wqzhd);
		wqzhd = aux;
	}
}
