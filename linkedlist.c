#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head;

void add( int num )
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=num;

	if (head== NULL)
	{
	  head=temp;
	  head->next=NULL;
	}
	else
	{
	  temp->next=head;
	  head=temp;
	}
}

void display(struct node *r)
{
	r=head;

	if(r==NULL)
	{
	  return;
	}
	
	while(r!=NULL)
	{
	  printf("%d ",r->data);
	  r=r->next;
	}
	  printf("\n");
}

int main()
{
	struct node *n;
        head=NULL;

	add(5);
	add(6);
	
	printf("Element(s) in the list are(Last to first) : ");

	display(n);
}


