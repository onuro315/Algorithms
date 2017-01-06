#include <stdio.h>
#define SIZE 5
 
struct stack
{
    int can[SIZE];
    int top;
};
typedef struct stack STACK;
STACK x;

void push(int k)
{
	int num;
	 if(x.top == (SIZE -1))
	 {
	   printf("Stack is full\n");
	   return;
	 }
	 else
	 {
	   x.top=x.top+1;
	   x.can[x.top] = k;
	 }
}

int pop()
{
  	int k;
  	if(x.top == -1)
       {
   	  printf("You don't have any data on stack.\n");
	  return(x.top);
        }
  	   else
  	     {
   	 	 k=x.can[x.top];
   	  	 printf("%d",x.can[x.top]);
   	  	 x.top=x.top-1;
  	     }
}

void display()
{
   	int z;
	printf("\n");
    	if(x.top == -1)
  	{
   	  printf("You don't have any data on stack.\n");
  	}
	   else
  	     {
	  	for(z=x.top ; z >= 0 ; z--)
		 {
		    printf("%d \t",x.can[z]);
		 }
  	     } 
}


int main()
{
   x.top=-1;
   push(5);
   push(8);
   display();
   pop();
   pop();
   display();
}







