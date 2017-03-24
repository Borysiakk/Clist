
#include "Node.h"

typedef struct List List;

struct List
{
	Node * next;
	Node * begin;
	Node * end;
};

List * CreateList();
void pop_back(List * list);
void push_back(List * list, Node * node);
Node * find(List * list, void * value);
Node * find_end(List * list, void * value);
void DestroyList(List * list);



