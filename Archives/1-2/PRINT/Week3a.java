import java.util.*;
class Week3a //most frequent
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of the array:");
		int size = sc.nextInt();
		int[] arr=new int[size];
		System.out.println("Enter the elements of the array:");
		for(int i=0;i<arr.length;i++)
		{
			arr[i]= sc.nextInt();
		}
		Arrays.sort(arr);
		int n=arr.length;
		int max=1;
		int temp= arr[0];
		int count = 1;
		for(int i=1;i<arr.length;i++)
		{
			if(arr[i]==arr[i-1])
				count++;
			else
			{
				if(count>max)
				{
					max=count;
					temp=arr[i-1];
				}
				count=1;
			}
		}
		if(count>max)
		{
			max=count;
			temp=arr[n-1];
		}
		System.out.println("The most frequent number is:"+temp);
		System.out.println("Number of times repeated:"+max);
	}	
}

/*
OUTPUT

Enter the size of the array:
4
Enter the elements of the array:
1 5 3 1 
The most frequent number is:1
Number of times repeated:2
*/
