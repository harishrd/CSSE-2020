class Week1a
{
	public static void main(String args[])
	{
		int sum=0;
		int n=args.length;
		int a[] = new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(args[i]);
			sum+=a[i];
		}
		System.out.println(sum);
	}		
}

/*
OUTPUT

java Week1a 4 2 3 1
10
*/
