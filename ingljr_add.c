#include "monty.h"
/**
 * wzq_add - adds the top two elements of the stack.
 * @wzqhd: stack wzqhd
 * @wzqctr: line_number
 * Return: no return
*/
void wzq_addwz(stack_t **wzqhd, unsigned int wzqctr)
{
	stack_t *h;
	int wzqlen = 0, aux;

	h = *wzqhd;
	while (h)
	{
		h = h->next;
		wzqlen++;
	}
	if (wzqlen < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", wzqctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	h = *wzqhd;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*wzqhd = h->next;
	free(h);
}


