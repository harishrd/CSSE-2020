// 7. b) Write a java program to throw a user defined exception called Negative, if the entered input is a negative number. 

import java.util.*;
import java.lang.*;

class NegativeException extends Exception {
	public String toString() {
		return "Number must be positive";
	}	
}

class Week7b {
	public static void main(String args[]) {
		System.out.println("Enter a number");
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		
		try {
			if(n<0) {
				throw new NegativeException();
			}
		}
		
		catch (NegativeException e) {
			System.out.println(e);
		}
	}	
}

/*
	OUTPUT
	
	Enter a number
	-5
	Number must be positive

*/
