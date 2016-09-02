#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cassert>
#include <fstream>
#include <cstring>

namespace ArrayOps
{
	void initArray(int arr[], int aSize);
	void printArray(const int arr[], int aSize);
	void fillArray(int arr[], int aSize);
	int linearSearch(const int arr[], int aSize, int nrToSearch);
	void bubbleSort(int arr[], int aSize);
	void selectionSort(int arr[], int aSize);
}

using namespace std;
using namespace ArrayOps;

int main()
{
	const int aSize = 10;
	int arr[aSize];

	initArray(arr, aSize);

	fillArray(arr, aSize);

	cout << "Unsorted array: " << endl;
	printArray(arr, aSize);
	
	selectionSort(arr, aSize);

	cout << "Sorted array: " << endl;
	printArray(arr, aSize);
	
	system("pause");
}

void ArrayOps::initArray(int arr[], int aSize)
{
	for(int i = 0; i < aSize; i++)
	{
		arr[i] = 0;
	}
}

void ArrayOps::printArray(const int arr[], int aSize)
{
	for(int i = 0; i < aSize; i++)
	{
		cout << arr[i] << endl;
	}
}

void ArrayOps::fillArray(int arr[], int aSize)
{
	for(int i = 0; i < aSize; i++)
	{
		cin >> arr[i];
	}
}

int ArrayOps::linearSearch(const int arr[], int aSize, int nrToSearch)
{
	int position;

	for(position = 0; position < aSize; position++)
	{
		if(arr[position] == nrToSearch)
		{
			return position;
		}
	}

	return -1;
}

void ArrayOps::bubbleSort(int arr[], int aSize)
{
	int temp;

	for(int i = 1; i < aSize; i++)
	{
		for(int j = 0; j < aSize - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void ArrayOps::selectionSort(int arr[], int aSize)
{
	int temp;
	int smallestIndex;

	for(int i = 0; i < aSize; i++)
	{
		smallestIndex = i;

		for(int j = i + 1; j < aSize; j++)
		{
			if(arr[j] < arr[smallestIndex])
			{
				smallestIndex = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[smallestIndex];
		arr[smallestIndex] = temp;
	}
}