#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @wzqhd: stack wzqhd
 * @qwznter: line_number
 * Return: no return
*/
void wzqf_chr(stack_t **wzqhd, unsigned int qwznter)
{
	stack_t *h;

	h = *wzqhd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", qwznter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", qwznter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
