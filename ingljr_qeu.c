#include "monty.h"
/**
 * f_queue - prints the top
 * @wzqhd: stack wzqhd
 * @counter: line_number
 * Return: no return
*/
void wzqf_que(stack_t **wzqhd, unsigned int counter)
{
	(void)wzqhd;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @wzqhd: wzqhd of the stack
 * Return: no return
*/
void wzqdque(stack_t **wzqhd, int n)
{
	stack_t *wzqnw_nd, *aux;

	aux = *wzqhd;
	wzqnw_nd = malloc(sizeof(stack_t));
	if (wzqnw_nd == NULL)
	{
		printf("Error\n");
	}
	wzqnw_nd->n = n;
	wzqnw_nd->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*wzqhd = wzqnw_nd;
		wzqnw_nd->prev = NULL;
	}
	else
	{
		aux->next = wzqnw_nd;
		wzqnw_nd->prev = aux;
	}
}


