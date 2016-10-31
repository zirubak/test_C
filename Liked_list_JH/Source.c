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
	end->data = NULL;

	//connect head to tail
	head->next = end;

	//add 'A' next head
	node *temp = malloc(sizeof(node));
	temp->data = 'A';
	temp->next = end;
	head->next = temp;

	//add 'B' 
	node *temp_2 = malloc(sizeof(node));
	temp_2->data = 'B';
	temp_2->next = end;
	temp->next = temp_2;

	//add 'C'
	node *temp_3 = malloc(sizeof(node));
	temp_3->data = 'C';
	temp_3->next = end;
	temp_2->next = temp_3;

	//add 'D'
	node *temp_4 = malloc(sizeof(node));
	temp_4->data = 'D';
	temp_4->next = end;
	temp_3->next = temp_4;
}

int main(void)
{
	init();

	return 0;
}