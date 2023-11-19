#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @wzqhd: stack wzqhd
 * @wzqcntr: line_number
 * Return: no return
*/
void wzq_md(stack_t **wzqhd, unsigned int wzqcntr)
{
	stack_t *h;
	int wzqln = 0, aux;

	h = *wzqhd;
	while (h)
	{
		h = h->next;
		wzqln++;
	}
	if (wzqln < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", wzqcntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	h = *wzqhd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", wzqcntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*wzqhd = h->next;
	free(h);
}
