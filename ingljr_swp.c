#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @wzqhd: stack wzqhd
 * @counter: line_number
 * Return: no return
*/
void wqz_swp(stack_t **wzqhd, unsigned int counter)
{
	stack_t *h;
	int wzqln = 0, wzqax;

	h = *wzqhd;
	while (h)
	{
		h = h->next;
		wzqln++;
	}
	if (wzqln < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	h = *wzqhd;
	wzqax = h->n;
	h->n = h->next->n;
	h->next->n = wzqax;
}
