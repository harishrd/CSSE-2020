#include<stdio.h>
 int main()
{
	 int a[50],n,i,j,min,t;
	 printf("enter the arrqy size:");
	 scanf("%d",&n);
	 printf("enter the elements in to array:");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	
	 }
	 for(i=0;i<n;i++)
	 {
	 	min=i;
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[min]>a[j])
	 		{
	 			 min=j;
	 		}
	 		if(min!=i)
	 		{
			
	 			t=a[i];
	 			a[i]=a[j];
	 			a[j]=t;
	     	}
			 
		 }
	 }
	   for(i=0;i<n;i++)
	 {
	 
	   printf("%d\t",a[i]);
     }
     return 0;
}
