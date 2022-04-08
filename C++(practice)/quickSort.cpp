#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random()
{
	srand(time(0));
	return rand();
}

void print(int arr[], int size)
{
	for(int i=0; i<size; i++)
		cout << arr[i] << endl;
}

int main()
{
	int i, n;
	cout << "Enter the number of elements: ";
	cin >> n;
	int *arr = new int(n);
	cout << "\ninitializing the array..." << endl;
	for(i=0; i<n; i++)
	{
		arr[i] = random() % n;
	}
	print();
}