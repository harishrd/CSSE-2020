abstract class Shape
{
	abstract void numberOfSides();
}

class Triangle extends Shape
{
	public void numberOfSides()
	{
		System.out.println("Number of sides for a Trianle = " + 3);
	}
}

class Trapezoid extends Shape
{
	public void numberOfSides()
	{
		System.out.println("Number of sides for a Trapezoid = " + 4);
	}
}

class Hexagon extends Shape
{
	public void numberOfSides()
	{
		System.out.println("Number of sides for a Hexagon = " + 6);
	}
}

class Week4b
{
	public static void main(String args[])
	{
		Triangle t = new Triangle();
		t.numberOfSides();
		Trapezoid tr = new Trapezoid();
		tr.numberOfSides();
		Hexagon h = new Hexagon();
		h.numberOfSides();
	}
}
