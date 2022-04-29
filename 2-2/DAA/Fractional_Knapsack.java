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
				if((((float)arry[1][i]) / ((float)arry[0][i])) > max)
				{
					max = ((float)arry[1][i]) / ((float)arry[0][i]);
					j = i;
				}				
			}
			if(arry[0][j] > m)
			{
				System.out.println("\nQuantity of items number: " + (j+1) + " added is " + m);
				sum += m * max;
				m = -1;
			}
			else
			{
				System.out.println("\nQuantity of item number: " + (j+1) + " added is " + arry[0][j]);
				m -= arry[0][j];
				sum += (float)arry[i][j];
				arry[i][j] = 0;
			}
		}
		System.out.println("The total profit is " + sum);
		sc.close();
	}
}
