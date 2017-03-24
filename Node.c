#include "Node.h"


Node * CreateNode(void * value)
{
	Node * node = (Node*)malloc(sizeof(Node));
	node->value = value;
	return node;
}
