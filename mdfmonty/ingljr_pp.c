#include "monty.h"
/**
 * f_pop - prints the top
 * @qwzhd: stack qwzhd
 * @qwzntr: line_number
 * Return: no return
*/
void wzq_pp(stack_t **qwzhd, unsigned int qwzntr)
{
	stack_t *h;

	if (*qwzhd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", qwzntr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*qwzhd);
		exit(EXIT_FAILURE);
	}
	h = *qwzhd;
	*qwzhd = h->next;
	free(h);
}


