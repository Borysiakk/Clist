typedef struct Node Node;

struct Node
{
	Node * next;
	Node * back;
	void * value;
};

Node * CreateNode(void * value);