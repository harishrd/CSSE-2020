class Addition
{
	void sum(int a,int b,int c)
	{
		System.out.println("Sum of three integers= "+(a+b+c));
	}
	
	void sum(double a,double b,double c)
	{
		System.out.println("Sum of three double values = "+(a+b+c));
	}
	
	void sum(int a,int b,int c,int d)
	{
		System.out.println("Sum of four integers= "+(a+b+c));
	}
}

class Week2b
{
	public static void main(String args[])
	{
		Addition add= new Addition();
		add.sum(2,4,1,6);
		add.sum(3,6,2);
		add.sum(4.6,3,7.33);
	}
}
