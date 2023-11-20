#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@wqzhd: stack wqzhd
  *@counter: line_number
  *Return: no return
 */
void wzqf_rt(stack_t **wqzhd, __attribute__((unused)) unsigned int counter)
{
	stack_t *wqzcpy;

	wqzcpy = *wqzhd;
	if (*wqzhd == NULL || (*wqzhd)->next == NULL)
	{
		return;
	}
	while (wqzcpy->next)
	{
		wqzcpy = wqzcpy->next;
	}
	wqzcpy->next = *wqzhd;
	wqzcpy->prev->next = NULL;
	wqzcpy->prev = NULL;
	(*wqzhd)->prev = wqzcpy;
	(*wqzhd) = wqzcpy;
}
