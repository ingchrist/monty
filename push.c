#include "monty.h"
/**
 * f_push - add node to the stack
 * @qwzhd: stack qwzhd
 * @counter: line_number
 * Return: no return
*/
void wqzf_ph(stack_t **qwzhd, unsigned int counter)
{
	int n, qwzj = 0, wzqfg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			qwzj++;
		for (; bus.arg[qwzj] != '\0'; qwzj++)
		{
			if (bus.arg[qwzj] > 57 || bus.arg[qwzj] < 48)
				wzqfg = 1; }
		if (wzqfg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*qwzhd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*qwzhd);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		wzqdnd(qwzhd, n);
	else
		wzqdque(qwzhd, n);
}
