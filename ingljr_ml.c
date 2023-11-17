#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @wzqhd: stack wzqhd
 * @wzqnter: line_number
 * Return: no return
*/
void wzqf_ml(stack_t **wzqhd, unsigned int wzqnter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", wzqnter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	h = *wzqhd;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*wzqhd = h->next;
	free(h);
}
