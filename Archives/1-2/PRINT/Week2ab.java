import java.util.*;
class Week2ab  //Fibonacci Non Recursion
{
	public static void main(String args[])
	{
		int n1=0,n2=1,n3=0,i,n;
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter n value:");
		n=sc.nextInt();
		for(i=1;i<n;i++)
		{
			n3=n1+n2;
			n1=n2;
			n2=n3;
		}
		System.out.println(n+"th term of the series = "+n3);
	}
}

/*
OUTPUT

Enter n value: 5
The 5th term of the series = 5
*/
