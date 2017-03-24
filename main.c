#include <stdio.h>

#include "List.h"

int main()
{
	List * list = CreateList();
	push_back(list, CreateNode((int*)1));
	push_back(list, CreateNode((int*)2));
	push_back(list, CreateNode((int*)3));
	
	for (Node * obj = list->begin; obj != NULL; obj = obj->next)
	{
		printf("%i\n", (int)obj->value);
	}

	Node * a = find(list, 2);
	Node * b = find_end(list, 3);
	if (a != NULL)
	{
		printf("Found element\n");
	}

	pop_back(list);
	for (Node * obj = list->begin; obj != NULL; obj = obj->next)
	{
		printf("%i\n", (int)obj->value);
	}

	DestroyList(list);
	getchar();
	return 0;
}	