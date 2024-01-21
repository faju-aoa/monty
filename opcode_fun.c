#include "monty.h"

/**
 * push - pushes an element to the stack
 *
 * @doubly: head of the linked list
 * @data: line number
 * Return: no return
 */
void push(stack_t **doubly, unsigned int data)
{
	int n, i;

	if (!var_glo.arg)
	{
		dprintf(2, "L%u: ", data);
		dprintf(2, "usage: push integer\n");
		free_var_glo();
		exit(EXIT_FAILURE);
	}

	for (i = 0; var_glo[i] != '\0'; i++)
	{
		if (!isdigit(var_glo.arg[i]) && var_glo.arg[i] != '-')
		{
			dprintf(2, "L%u: ", cline);
			dprintf(2, "usage: push integer\n");
			free_var_glo();
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(var_glo.arg);

	if (var_glo.lifo == 1)
		creat_node_list(doubly, n);
	else
		creat_node_list(doubly, n);
}
/**
 * pall - prints all values on the stack
 *
 * @head: head of the linked list
 * @data: line numbers
 * Return: no return
 */
void pall(stack_t **head, unsigned int data)
{
	stack_t *ptr
	(void)data;

	ptr = *head;

	while (head)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
