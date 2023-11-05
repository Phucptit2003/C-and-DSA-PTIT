#include<stdio.h>

#include<iostream>

using namespace std;


int partition (int arr[], int low, int high)
{
	int pivot = arr[high];	
	int left = low;	
	int right = high - 1;
	while(true){
	while(left <= right && arr[left] < pivot) left++;
	while(right >= left && arr[right] > pivot) right--;
	if (left >= right) break;
	swap(arr[left], arr[right]);
	left++;
	right--;
	}
	swap(arr[left], arr[high]);
	return left;
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
	int index = partition(arr, low, high);
	quickSort(arr, low, index - 1);
	quickSort(arr, index + 1, high);
	}
}
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++){
		cout << arr[i]<<" ";
	}
}
int main()
{
	int arr[] = {2 ,5, 1, 7, 9, 8, 12};	
	int n = sizeof(arr)/sizeof(arr[0]);	
	quickSort(arr, 0, n-1);
	printArray(arr, n);
}
