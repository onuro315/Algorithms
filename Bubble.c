#include <stdio.h>
#define SIZE 8

void bubbleSort(int arr[SIZE])
{
	int temp;
	for(int i=0;i<SIZE-1;i++){
	 int ctrl=1;
		for(int j=SIZE-1;j>i;j--){
				if(arr[j-1]>arr[j]){
					ctrl=0;
					temp=arr[j-1];
					arr[j-1]=arr[j];
					arr[j]=temp;
					   	   }
			for(int i=0;i<SIZE;i++){
				printf("%d,",arr[i]);
			   		       }
		printf("End of the i=%d j=%d part.\n",i,j);
				        } 
		if(ctrl)
			break;
			        }
			   
}

int main(){
	int ar1[SIZE]={1,2,3,4,5,6,7,8};
	bubbleSort(ar1);
}	


