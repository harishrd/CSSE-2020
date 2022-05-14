// Kruskal's Algorithm

import java.util.Scanner;
public class Kruskal
{
	int parent[] = new int[10];
	int find(int m) // takes an element and returns its parent vertex in the MSTree index(p)
	{
		int p = m;
		while(parent[p] != 0)
			p = parent[p];
		return p;
	}

	void union(int i, int j)
	{
		if(i<j)
			parent[i] = j;
		else
			parent[j] = i;
	}

	void krkl(int[][]a, int n)
	{
		int u=0, v=0, min, k=0, i, j, sum=0;
		while(k < n-1) // k keeps track of the no. of edges
		{
			min = 99;
			for(i=1; i<=n; i++) {
				for(j=1; j<=n; j++) {
					if(a[i][j] < min && i != j)
					{
						min = a[i][j];
						u = i;
						v = j;
					}
				}
			}
			i = find(u); // returns the parent of u
			j = find(v); // returns the parent of v
			if (i != j) { // check for a cycle
				union(i,j);
				System.out.println("("+u+","+v+")"+"="+a[u][v]);
				sum += a[u][v];
				k++;
			}
			a[u][v] = a[v][u] = 99;
		}
		System.out.println("The cost of minimum spanning tree = " + sum);
	}

	public static void main(String[] args)
	{
		int a[][] = new int[10][10];
		int i, j;
		System.out.println("Enter the number of vertices of the graph: ");
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		System.out.println("Enter the weighted matrix: ");
		for(i=1; i<=n; i++)
			for(j=1; j<=n; j++)
				a[i][j] = sc.nextInt();
		Kruskal k = new Kruskal();
		k.krkl(a,n);
		sc.close();
	}
}

/* OUTPUT:
Enter the number of vertices of the graph:
4
Enter the weighted matrix:
0       2       99      4
2       0       6       99
99      6       0       8
4       99      8       0
(1,2)=2
(1,4)=4
(2,3)=6
The cost of minimum spanning tree = 12
*/