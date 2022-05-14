import java.io.IOException;
import java.util.Scanner;

class Fractional_Knapsack
{
	public static void main (String args[]) throws IOException
	{
		int i, j=0, max_qty, m, n;
		float sum = 0, max;
		Scanner sc = new Scanner(System.in);
		int arry[][] = new int[2][20];
		
		System.out.println("Enter the number of items: ");
		n = sc.nextInt();
		
		System.out.println("\nEnter the weight of each item: ");
		for(i=0; i<n; i++)
			arry[0][i] = sc.nextInt();
			
		System.out.println("\nEnter the values of each item: ");
		for(i=0; i<n; i++)
			arry[1][i] = sc.nextInt();
			
		System.out.println("\nEnter max volume of knapsack: ");
		max_qty = sc.nextInt();
		
		m = max_qty;
		while(m >= 0)
		{
			max = 0;
			for(i=0; i<n; i++)
			{
				if((((float)arry[1][i]) / ((float)arry[0][i])) > max) 	// [1][i] values
				{														// [0][i] weights
				max = ((float)arry[1][i]) / ((float)arry[0][i]);//max = item with the maximum value to 														weight ratio
					j = i;	// save the index
				}
			}
			if(arry[0][j] > m)	 // add a fraction of the item that could fit in teh sack
			{
				System.out.println("\nQuantity of items number: " + (j+1) + " added is " + m);
				sum += m * max; // value * (fractional weight / actual weight)
				m = -1; // to terminate the loop (since it's the last item)
			}
			else	// add the item as a whole (since weight is less than the free space)
			{
				System.out.println("\nQuantity of item number: " + (j+1) + " added is " + arry[0][j]);
				m -= arry[0][j];	// decrease the free space
				sum += (float)arry[i][j];
				arry[i][j] = 0; // make the value equal to 0 of that item added to the sack
			}
		}
		System.out.println("The total profit is " + sum);
		sc.close();
	}
}
