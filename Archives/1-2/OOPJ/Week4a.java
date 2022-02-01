import java.util.*;

class Week4a {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int ch,a,b;
		char c;
		do {
			System.out.println("Enter 1:Add, 2:Sub");
			ch = sc.nextInt();
			System.out.println("Enter a,b valuse: ");
			a= sc.nextInt();
			b= sc.nextInt();
			
			switch(ch)
			{
				case 1: 
						System.out.println("Sum = " + (a+b));
						break;
				case 2: 
						System.out.println("Sub = " + (a-b));
						break;
				default:
						System.out.println("Wrong choice");
			}
			
			System.out.println("Do you want to continue? (Y/y) : ");
			c = sc.next().charAt(0);
		} while (c=='Y' || c=='y');
	} 
} 
