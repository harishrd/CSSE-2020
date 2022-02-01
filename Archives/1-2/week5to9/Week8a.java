/* 8. a) Write a Java program that creates three threads. First thread displays - Good Morning for every one second,
the second thread displays - Hello for every two seconds and the third thread displays - Welcome for every three seconds. 
*/

class GoodMorning extends Thread {
	synchronized public void run() {
		int i=0;
		try {
			while(i<5) {
				sleep(1000);
				System.out.println("Good Morning");
				i++;
			}
		} catch (Exception e) {
			
		}
	}
}

class Hello extends Thread {
	synchronized public void run() {
		int i=0;
		try {
			while(i<5) {
				sleep(2000);
				System.out.println("Hello");
				i++;
			}
		} catch (Exception e) {
			
		}
	}
}

class Welcome extends Thread {
	synchronized public void run() {
		int i=0;
		try {
			while(i<5) {
				sleep(3000);
				System.out.println("Welcome");
				i++;
			}
		} catch (Exception e) {
			
		}
	}
}

class Week8a {
	public static void main(String args[]) {
		GoodMorning t1 = new GoodMorning();
		Hello t2 = new Hello();
		Welcome t3 = new Welcome();
		t1.start();
		t2.start();
		t3.start();
	}
}

/*
OUTPUT
Good Morning
Hello
Good Morning
Welcome
Good MorningHello
Good Morning
Good Morning
Welcome
HelloHello
Welcome
Hello
Welcome
Welcome
*/


