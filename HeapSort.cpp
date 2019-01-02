//Travelle Barrett
//A00380824
//Exercise one: implementation of Heap Sort Algorithm

#include <iostream>
using namespace std;

//This method is to heapify a subtree rooted with node i which is an index in arr[].
template <class ItemType>
void heapify(ItemType arr[], int lowIndex, int highIndex)
{
	int i = lowIndex;
	int n = 2 * i + 1;
	ItemType heap = arr[i];
	while (n <= highIndex)
	{
		if(n < highIndex&&arr[n] < arr[n + 1])
			n++;
		if (heap < arr[n]) 
		{
			arr[i] = arr[n];
			i = n;
			n = 2 * i + 1;
		}
		else
			break;
	}
	arr[i] = heap;
}

//This is the main function to do heap sort algorithm
template <class ItemType>
void heapSort(ItemType arr[], int a)
{
	ItemType heap;
	for(int i = (a-1)/2; i >= 0; i--)
		heapify(arr, i, a-1);
	for (int n = 0; n < 6; n++)
		cout << arr[n] << " ";
	cout << "Initial rebuild to form a heap" << endl;
	for (int i = a - 1; i >= 1; i--) {
		heap = arr[0];
		arr[0] = arr[i];
		arr[i] = heap;
		for (int j = 0; j < 6; j++)
			cout << arr[j] << " ";
		cout << "After swapping " << arr[0] << " and " << arr[i] << endl;
		heapify(arr, 0, i - 1);
		if (i - 1 > 0) {
			for (int p = 0; p < 6; p++)
				cout << arr[p] << " ";
			cout << "rebuild(anArray,0," << i - 1 << ")" << endl;
		}
	}
	
}

//A simple function to print the original array of size n
template <class ItemType>
void printArray(ItemType arr[], int n)
{
	for (int i = 0; i<n; ++i)
		cout << arr[i] << " ";
	cout << "Original array\n";
}




