 #include<stdio.h>
int main(){

  int i,j,temp;
  int a[8]={4,2,7,3,1,8,5,6};

  for(i=1;i<8;i++)
  {
      temp=a[i];
      j=i-1;
        while((temp<a[j])&&(j>=0))
       {
         a[j+1]=a[j];
         j=j-1;
       }
      a[j+1]=temp;
  }

  printf("After sorting: ");
  for(i=0;i<8;i++)
      printf(" %d ",a[i]);
}
