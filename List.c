#include "List.h"
#include <stddef.h>

List * CreateList()
{
	List * list = (List*)malloc(sizeof(List));
	list->next = NULL;
	list->begin = NULL;
	list->end = NULL;
	return list;
}

void pop_back(List * list)
{
	Node * temp = list->next->back;
	free(list->next);
	temp->next = NULL;
	list->next = temp;
	list->end = temp;
}

void push_back(List * list, Node * node)
{
	if (list->begin == NULL)
	{
		node->back = NULL;
		node->next = NULL;

		list->next = node;
		list->begin = node;
		list->end = node;

	}
	else
	{
		node->next = NULL;
		node->back = list->next;

		list->end = node;
		list->next->next = node;
		list->next = list->next->next;

	}
}

Node * find(List * list, void * value)
{
	Node * obj = list->begin;
	while (obj != NULL)
	{
		if (value == obj->value)
		{	
			return obj;
		}
		obj = obj->next;
	}
	return NULL;
}

Node * find_end(List * list, void * value)
{
	Node * obj = list->end;
	while (obj != NULL)
	{
		if (value == obj->value)
		{
			return obj;
		}
		obj = obj->back;
	}
	return NULL;
}

void DestroyList(List * list)
{
	Node * obj = list->begin;
	while (obj != NULL)
	{
		Node * back = obj->back;
		free(obj);
		obj = back;
		back = NULL;
	}
	
}
