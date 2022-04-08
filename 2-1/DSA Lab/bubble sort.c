#include<stdio.h>
 int main()
{
	 int a[50],n,i,j,temp;
	 printf("enter the array size:");
	 scanf("%d",&n);
	 printf("\nenter the elements in to array:");
	 for(i=0;i<n;i++)
	 {
	      scanf("%d",&a[i]);
	 	
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		if(a[i]>a[j])
	 		{
	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
	 			
			 }
		 }
	 }
	 for(i=0;i<n;i++)
	 {
	 
	   printf("%d\t",a[i]);
     }
     return 0;
}
