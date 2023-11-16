#include "monty.h"
/**
* wzqxct - wzqxcts the opcode
* @stack: head linked list - stack
* @wzqcnt: line_wzqcnt
* @file: poiner to monty file
* @wzqctt: line wzqctt
* Return: no return
*/
int wzqxct(char *wzqctt, stack_t **stack, unsigned int wzqcnt, FILE *file)
{
	instruction_t opst[] = {
				{"push", wqzf_ph}, {"pall", wzqf_pll}, {"pint", f_pint},
				{"pop", wzq_pp},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", wzqf_sb},
				{"div", wqz_dv},
				{"mul", wzqf_ml},
				{"mod", wzq_md},
				{"pchar", wzqf_chr},
				{"pstr", wqzf_pr},
				{"rotl", f_rotl},
				{"rotr", wzqf_rt},
				{"queue", wzqf_que},
				{"stack", wzqf_tk},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(wzqctt, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, wzqcnt);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", wzqcnt, op);
		fclose(file);
		free(wzqctt);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
