#include <iostream>
using namespace std;

class Birthday {
	public:
		Birthday(int m, int d, int y)
		: month(m), day(d), year(y)
		{
			
		}
		
		void printDate() {
			cout<<month<<"/"<<day<<"/"<<year<<endl;
		}
	private:
		int month;
		int day;
		int year;
};

class Person {
	public:
		Person(string n, Birthday b)
		: name(n), Birthday(b)
		{
			
		}
		void printInfo() {
			cout << name << endl;
			bd.printDate();
		}
		
	private:
		string name;
		Birthday bd;
};

int main() {
	Birthday bd(04,02,2001);
	Person p("Bob", bd);
	p.printInfo();
}