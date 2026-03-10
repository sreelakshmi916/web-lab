#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* createNode(int data){
	struct Node* n = malloc(sizeof(struct Node));
	n->data = data;
	n->next = NULL;
	return n;
}

void insertAtFirst(struct Node** h, int d){
	struct Node* n = createNOde(d);
	n->next = *h;
	*h = n;
}

void insertAtEnd(struct Node** h, int d){
	struct Node* n = createNode(d);
	if(!*h){
	*h = n;
	return;
}
	struct Node* t = *h;
	while(t->next)t = t->next;
	t->next = n;
}

void insertAtPosition(struct Node** h, int d, int p){
	struct Node* n = createNode(d);
	if(p==0){
	insertAtFirst(h,d);
	return;
}
	struct Node* t = *h;
	for(int i=0; t&&i<p-1;i++)t=t->next;
	if(!t){
	print("Out\n");
	free(n);
	return;
}
	n->next = t->next;
	t->next=n;
}

void deleteFromFirst(struct Node** h){
	if(!*h){
	printf("Empty\n");
	return;
}
struct Node* t= *h;
*h = t->next;
free(t);
}

void deleteFromEnd(struct Node** h){
	if(!*h){
	printf("Empty\n");
	return;
}
struct Node* t= *h;
	if(!t->next){
		free(t);
		*h = NULL;
		return;
	}
	while(t->next->next)t=t->next;
	free(t->next);
	t->next = NULL;
}

void deleteAtPosition(struct Node** h, int p)
{
	if(!*h){
	printf("Empty\n");
	return;
}
	if(p==0)
	{
		deleteFromFirst(h);
		return;
	}
	struct
}
