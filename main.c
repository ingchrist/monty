#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @wqzarc: number of arguments
* @wqzgv: monty file location
* Return: 0 on success
*/
int main(int wqzarc, char *wqzgv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t wzqrd_lne = 1;
	stack_t *stack = NULL;
	unsigned int wzqcnt = 0;

	if (wqzarc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(wqzgv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", wqzgv[1]);
		exit(EXIT_FAILURE);
	}
	while (wzqrd_lne > 0)
	{
		content = NULL;
		wzqrd_lne = getline(&content, &size, file);
		bus.content = content;
		wzqcnt++;
		if (wzqrd_lne > 0)
		{
			execute(content, &stack, wzqcnt, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
