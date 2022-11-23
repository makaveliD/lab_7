
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

int* fillArrayByRandomDigits(int arr[], int arraySize) {
	
	srand(time(0));
	for (int i = 0; i < arraySize; i++)
	{
		arr[i] = rand();
	}
	return arr;
}

void printArray(int arr[], int arraySize) {
	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] <<endl;
	}
}
int main()
{
	int a[10];
	int *pointerA = fillArrayByRandomDigits(a, 10);

	printArray(pointerA, 10);
}
