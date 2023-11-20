#include "monty.h"
/**
  *f_sub- sustration
  *@wzqhd: stack wzqhd
  *@counter: line_number
  *Return: no return
 */
void wzqf_sb(stack_t **wzqhd, unsigned int counter)
{
	stack_t *aux;
	int wqzss, wzqnds;

	aux = *wzqhd;
	for (wzqnds = 0; aux != NULL; wzqnds++)
		aux = aux->next;
	if (wzqnds < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*wzqhd);
		exit(EXIT_FAILURE);
	}
	aux = *wzqhd;
	wqzss = aux->next->n - aux->n;
	aux->next->n = wqzss;
	*wzqhd = aux->next;
	free(aux);
}


