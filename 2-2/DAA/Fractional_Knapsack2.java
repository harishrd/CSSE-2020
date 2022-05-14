import java.io.IOException;
import java.util.Scanner;

class Fractional_Knapsack2
{
	public static void main(String args[]) throws IOException
	{
		int i,j=0,max_qty,m,n;
		float sum=0,max;  // sum ==> total value
		Scanner sc = new Scanner(System.in);
		int array[][]=new int[2][20];
		System.out.println("Enter no of items: ");
		n=sc.nextInt();
		System.out.println("Enter the weights of each items: ");
		for(i=0;i<n;i++)
			array[0][i]=sc.nextInt();
		System.out.println("Enter the values of each items: ");
		for(i=0;i<n;i++)
			array[1][i]=sc.nextInt();
		System.out.println("Enter maximum volume of knapsack: ");
		max_qty = sc.nextInt();
		m=max_qty;   // free space
		while(m>=0)
		{
			max=0;
			for(i=0;i<n;i++)
			{
				if(((float)array[1][i])/((float)array[0][i])>max)   // [1][i] values
				{                       						    // [0][i] weights
					max=((float)array[1][i])/((float)array[0][i]);  // max ==> item with the maximum value to weight ratio
					j=i;  // save the index
				}
			}
					
			if(array[0][j]>m)   // add a fraction of the item that could fit in teh sack
			{
				System.out.println("Quantity of item number: " +  (j+1) + " added is " +m);
				sum+=m*max;
				m = -1; // to terminate the loop (since it's the last item)
			}
			else	// add the item as a whole (since weight is less than the free space)
			{
				System.out.println("Quantity of item number: " + (j+1) + " added is " + array[0][j]);
				m -= array[0][j];   // decrease the free space
				sum += (float)array[1][j];
				array[1][j] = 0;
			}
		}
		System.out.println("The total profit is " + sum);
		sc.close();
	}
}
