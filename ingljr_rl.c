#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *wqztmp = *head, *wqzax;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	wqzax = (*head)->next;
	wqzax->prev = NULL;
	while (wqztmp->next != NULL)
	{
		wqztmp = wqztmp->next;
	}
	wqztmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = wqztmp;
	(*head) = wqzax;
}
