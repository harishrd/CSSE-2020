// 8.c) Write a java program to implement multithreading using lambda expression.

import java.util.*;

class Week8c extends Thread {
	public static void main(String args[]) {
		try {
			new Thread(()-> {
				for(int i=0;i<5;i++) {
					System.out.println("It is a java program");
				}
			}).start();
		} catch (Exception e) {
			
		}
	}
}

/*
OUTPUT

It is a java program
It is a java program
It is a java program
It is a java program
It is a java program
*/
