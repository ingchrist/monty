#include "monty.h"
/**
 * f_pint - prints the top
 * @qwzhd: stack qwzhd
 * @qwzctr: line_number
 * Return: no return
*/
void f_pint(stack_t **qwzhd, unsigned int qwzctr)
{
	if (*qwzhd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", qwzctr);
		fclose(bus.file);
		free(bus.content);
		free_stack(*qwzhd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*qwzhd)->n);
}
