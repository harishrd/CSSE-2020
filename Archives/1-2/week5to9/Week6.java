import java.util.*;

interface Sports {
	void graceMarks();
}

class Student {
	String name,id,gender;
	int age;
	void readDetails(String name, String id, String gender, int age) {
		this.name = name;
		this.id = id;
		this.gender = gender;
		this.age = age;
	}
}

class Exam extends Student{
	int marks[] = new int[10];
	void display() {
		System.out.println("Name: "+name+"\tId: "+id+"\tGender: "+gender+"\tAge: "+age);
	}
	void readMarks() {
		System.out.println("Enter marks of 6 subjects: ");
		Scanner sc = new Scanner(System.in);
		for(int i=0;i<6;i++)
		{
			marks[i] = sc.nextInt();
		}
	}
}

class Results extends Exam implements Sports {
	double totalMarks=0, examMarks=0, graceMarks=50;
	char ch;
	
	void calculate () {
		for(int i=0; i<6; i++)
			examMarks += marks[i];
	}
	
	public void graceMarks() {
		System.out.println("Specify Y/y if student have participated in games: ");
		Scanner sc = new Scanner(System.in);
		ch = sc.next().charAt(0);
		
		if(ch=='Y' || ch=='y')
		{
			totalMarks = examMarks + graceMarks;
			if(totalMarks>600)
				totalMarks = 600;
			
		}
		else
			totalMarks = examMarks;	

		System.out.println("The total marks obtained by the student is : " + totalMarks);
	}
}

class Week6 {
	public static void main (String args[]) {
		Results r = new Results();
		r.readDetails("Hari", "66", "M", 18);
		r.display();
		r.readMarks();
		r.calculate();
		r.graceMarks();
	}
}

