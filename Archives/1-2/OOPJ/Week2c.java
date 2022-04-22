class Student
{
	String name;
	int id;
	int m1,m2,m3;
	Student()
	{
		name = "Hari";
		id=21;
		m1=86;
		m2=93;
		m3=96;
	}
	Student(String s,int n,int a, int b, int c)
	{
		name=s;
		id=n;
		m1=a;
		m2=b;
		m3=c;
	}
	void display()
	{
		System.out.println("name= "+name+"\tReg no.=" +id+ "\tMarks1="+m1+"\tMarks2="+m2+"\tMarks3="+m3);
	}
}

class Week2c
{
	public static void main(String args[])
	{
		Student obj= new Student();
		obj.display();
		Student deep= new Student("Chandu",13,64,35,41);
		deep.display();
	}
}

/*
OUTPUT

name= Hari	Reg no.=21	Marks1=86	Marks2=93	Marks3=96
name= Chandu	Reg no.=13	Marks1=64	Marks2=35	Marks3=41
*/
