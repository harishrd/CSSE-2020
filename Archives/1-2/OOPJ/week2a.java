import java.util.*;
class Week2a  //FibonacciRecursion
{
	static int fib(int n)
	{
		if(n==0)
			return 0;
		if(n==1 || n==2)
			return 1;
		else
			return fib(n-1)+fib(n-2);
	}
	
	public static void main(String args[])
	{
		int n;
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter n value:");
		n=sc.nextInt();
		System.out.print(n+"th term of series is = "+fib(n));
	}
}

/*
OUTPUT

Enter n value: 5
The 5th term of the series = 5
*/
