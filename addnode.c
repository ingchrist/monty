#include "monty.h"
/**
 * addnode - add node to the wzqhd stack
 * @wzqhd: wzqhd of the stack
 * @n: new_value
 * Return: no return
*/
void wzqdnd(stack_t **wzqhd, int n)
{

	stack_t *wzq_nd, *aux;

	aux = *wzqhd;
	wzq_nd = malloc(sizeof(stack_t));
	if (wzq_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = wzq_nd;
	wzq_nd->n = n;
	wzq_nd->next = *wzqhd;
	wzq_nd->prev = NULL;
	*wzqhd = wzq_nd;
}
