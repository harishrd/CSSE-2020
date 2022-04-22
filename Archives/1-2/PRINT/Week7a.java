// 7. a) Write a program to handle Arithmetic Exception, Array Out Of Bounds Exception using try and multiple catch statements. 

class Week7a {
	public static void main(String args[]) {
		int a[] = {1,2,3,4,5,6};
		int n= a.length;
		
		try{
			System.out.println(a[0]);
			int z=64/n;
			System.out.println(a[z]);
		}
		
		catch (ArrayIndexOutOfBoundsException e) {
			System.out.println(e);
		}
		
		catch (ArithmeticException ae) {
			System.out.println(ae);
		}
		
		finally{
			System.out.println("End of program.");
		}
	}
}

/*  OUTPUT

	java -cp /tmp/x3DncHpQc8 Week7a
	1
	java.lang.ArrayIndexOutOfBoundsException: Index 10 out of bounds for length 6
	End of program.
*/
