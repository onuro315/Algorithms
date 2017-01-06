#include <stdio.h>	
#include <stdlib.h>
#define SIZE 8

void selectionSort(int arr[SIZE])
{
	
	int temp,min,i,x;
	for(i=0;i<SIZE-1;i++)
	{
          min=i;
	  for(x=i;x<SIZE;x++)
	  {
	       if(arr[x] < arr[min])
		{
		  x=min;
   		}
	  }
	   temp=arr[i];
	   arr[i]=arr[min];
	   arr[min]=temp;       
	}
	int k;
        for(k=0;k<SIZE;k++)
   	 {
     	   printf("%d	",arr[k]);
   	 }
}

int main()
{
	int ar1[SIZE]={5,2,7,6,3,1,8,4};
	selectionSort(ar1);
}
