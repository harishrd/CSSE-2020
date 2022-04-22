/* 9.  Write a program create a class “Book” with name, id, author, publisher and quantity as 
instance variables and a constructor to initialize them. Create a HashSet object of type Book 
and three Book instances b1, b2 and b3.Add these instances into HashSet and display them. */

class Book {
	String name,author,publisher;
	int id,quantity;
	
	Book(String name,int id, String author, String publisher, int quantity) {
		name = this.name;
		id = this.id;
		author = this.author;
		publisher = this.publisher;
		quantity = this.quantity;
	}
	
	public void print() {
		System.out.println("Name: " + name);
		System.out.println("Id: " + id);
		System.out.println("Author: " + author);
		System.out.println("Publisher: " + publisher);
		System.out.println("Quantity: " + quantity);
	}
}

class Week9 {
	public static void man(String args[]) {
		Book b1 = new Book("Book1",975894,"Bob","Penguin",230);
		Book b2 = new Book("Book2",63849,"Juli","Arihant",136);
		Book b3 = new Book("Book3",729833,"Eliot","Oxford",569);
		
		HashSet<Book> hs = new HashSet<Book>();
		hs.add(b1);
		hs.add(b2);
		hs.add(b3);
		
		Iterator itr = hs.Iterator();
		while(itr.hasNext()){
			Book b = itr.next();
			b.print();
		}
	}	
}
