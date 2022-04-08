// C++ program for Merge Sort
// sao  = subArrayOne
// sat  = subArrayTwo
// isao = indexOfSubArrayOne
// isat = indexOfSubArrayTwo
// ima  = indexOfMergedArray

#include <iostream>
using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right)
{
	auto const sao = mid - left + 1;
	auto const sat = right - mid;

	// Create temp arrays
	auto *leftArray = new int[sao],
		*rightArray = new int[sat];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < sao; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < sat; j++)
		rightArray[j] = array[mid + 1 + j];

	auto isao = 0, // Initial index of first sub-array
		isat = 0; // Initial index of second sub-array
	int ima = left; // Initial index of merged array

	// Merge the temp arrays back into array[left..right]
	while (isao < sao && isat < sat) {
		if (leftArray[isao] <= rightArray[isat]) {
			array[ima] = leftArray[isao];
			isao++;
		}
		else {
			array[ima] = rightArray[isat];
			isat++;
		}
		ima++;
	}
	// Copy the remaining elements of
	// left[], if there are any
	while (isao < sao) {
		array[ima] = leftArray[isao];
		isao++;
		ima++;
	}
	// Copy the remaining elements of
	// right[], if there are any
	while (isat < sat) {
		array[ima] = rightArray[isat];
		isat++;
		ima++;
	}
}

// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end)
		return; // Returns recursively

	auto mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (auto i = 0; i < size; i++)
		cout << A[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}

// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes



