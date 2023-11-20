#include "monty.h"
/**
 * f_div - divides the top two elements of the stack.
 * @wzqhd: stack wzqhd
 * @wzqctr: line_number
 * Return: no return
*/
void wqz_dv(stack_t **wzqhd, unsigned int wzqctr)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", wzqctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	h = *wzqhd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", wzqctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*wzqhd = h->next;
	free(h);
}
