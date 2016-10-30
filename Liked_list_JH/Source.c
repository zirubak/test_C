#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	char data;
	struct _node *next;	
}node;

node *head, *end;

void init(void) {
	//create head node
	head = malloc(sizeof(node));

	//create tail node
	end = malloc(sizeof(node));

	//connect head to tail
	head->next = end;

}

int main(void)
{
	init();

	return 0;
}