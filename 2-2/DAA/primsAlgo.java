import java.util.Scanner;

public class PrimsAlgo
{
	public static void main(String[] args)
	{
		int w[][] = new int[10][10];
		int n,i,j,s,k=0;
		int min;
		int sum=0; //to keep track of cost
		int u=0,v=0;
		int flag=0;
		int sol[] = new int[10];
		System.out.println("Enter the number of vertices: ");
		Scanner sc = new Scanner(System.in);
		n=sc.nextInt();
		for(i=1;i<=n;i++)
			sol[i]=0; //used to keep track of visited vertices
		System.out.println("Enter the weighted graph: ");
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				w[i][j] = sc.nextInt();
		System.out.println("Enter the source vertex: ");
		s=sc.nextInt();
		sol[s]=1; // since source vertex is known
		
		k=1; // no. of known vertices
		while (k <= n-1) //(n-1) since the last vertex can be easily
		{
			min=99;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(sol[i]==1 && sol[j]==0)
					{
						if(i!=j && w[i][j]<min)
						{
							min=w[i][j];
							u=i;
							v=j;
						}
					}
				}
			}
			sol[v]=1;
			sum=sum+min;
			k+=1; // known vertices increased
			System.out.println(u+"->"+v+"="+min);
		}
		for(i=1;i<=n;i++)
			if(sol[i] == 0)
				flag=1;
		if(flag==1)
			System.out.println("No spanning tree!");
		else
			System.out.println("The cost of minimum spanning tree is: "+sum);
		sc.close();
	}
}

/* OUTPUT:
Enter the number of vertices:
4
Enter the weighted graph:
0       2       99      4
2       0       6       99
99      6       0       8
4       99      8       0
Enter the source vertex:
1

1->2=2
1->4=4
2->3=6
The cost of minimum spanning tree is: 12
*/