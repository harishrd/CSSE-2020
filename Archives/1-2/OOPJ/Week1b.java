class Week1b
{
	public static void main(String args[])
	{
		int n=args.length;
		int a[]=new int[n];
		int temp;
		for(int i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(args[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		System.out.println("Ascending order:");
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+"  ");
		}
	}
}

/*
OUTPUT

java Week1b 6 3 4 2 9
2  3  4  6  8
*/
