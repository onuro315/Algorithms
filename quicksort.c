#include <stdio.h>


int partit(int A[],int p,int r)
{
  int temp,i,x,z;
  x=A[r];
  i=p-1;

  for(z=p;z<=r-1;z++)
  {
	if(A[z]<=x)
	{
		i++;
		temp=A[i];
		A[i]=A[z];
		A[z]=temp;
	}
  }

  temp=A[i+1];
  A[i+1]=A[r];
  A[r]=temp;

  return i+1;
}
void quickSort(int A[],int p,int r)
{
  int q;
  if(p<r)
  {
	q = partit(A,p, r);
	quickSort(A,p,q-1);
	quickSort(A,q+1,r);
  }
}

int main()
{
  int k[5]={5,3,7,2,4};
  int j;
  for(j=0;j<5;j++)
   {
	printf(" %d \t",k[j]);
   }

  quickSort(k,0,5);
  printf("\n After sorted \n ");
  for(j=0;j<5;j++)
   {
	printf(" %d \t",k[j]);
   }
}
