#include "monty.h"

/**
 * free_stack - frees the singly linked list
 * @head: pointer to list
 * Return: Nothing
 */
void free_stack(stack_t *head)
{
	stack_t *node = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

/**
 * free_list - frees getline list
 * @a: pointer to array of strings
 * Return: Nothing
 */
void free_list(char *a[])
{
	int i = 0;

	while (a[i] != NULL)
	{
		free(a[i]);
		i++;
	}
}