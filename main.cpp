#include <string>
#include "HeapSort.cpp"

int main()
{
	cout << "Driver program to test your implementation of HeapSort" << endl << endl;

	cout << "Test1: array of Stings" << endl;
	string a[6] = { "Zavier", "Brandon", "Adam", "Chelsey", "Fabio", "Emily" };
	printArray(a, 6);
	heapSort(a, 6);
	for (int i = 0; i < 6; i++)
		cout << a[i] << " ";
	cout << "Sorted array" << endl << endl;

	cout << "Test2: array of Integers" << endl;
	// Example in Figure 17.8

	// The trace should correspond to the trace in Figure 17.11
	int b[6] = { 6, 3, 5, 9, 2, 10 };
	printArray(b, 6);
	heapSort(b, 6);
	for (int i = 0; i < 6; i++)
		cout << b[i] << " ";
	cout << "Sorted array" << endl;

}  // end main