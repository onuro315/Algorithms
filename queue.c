#include <stdio.h>
#define SIZE 5


int queue[SIZE], rear=0, front=0;

void insert(int num)
{
	char a;
	if(rear==SIZE)
	{
	  printf("\n Queue full");
	  return;
	}
	
	do
	{
	  queue[front]=num;
	  front=front+1;
	}
	
	while(a);
}

int dequeue()
{
	int t;
    
	if(front==rear)
	{
           printf("\n Queue empty");
	   return 0;
	}

	rear=rear+1;
	t=queue[rear-1];
        printf("\n Dequeued number is %d",t);
	return t;
}

void display()
{
	int i;
	printf("\n Elements of the queue");
	for(i=rear;i<front;i++)
	{
          printf("  %d  ",queue[i]);
	}
}

int main()
{
	dequeue();
	insert(10);
	insert(13);
	display();
	dequeue();
	display();

}
