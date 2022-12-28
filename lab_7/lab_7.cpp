
	#include <iostream>
	#include <math.h>
	#include <time.h>

	using namespace std;


	float* generateCArray(float arrA[], float arrB[],float arrC[] , int arraySize) {
		

		for (int i = 0; i < arraySize; i++)
		{
			arrC[i] = fabs(pow(arrA[i], 2) - pow(arrB[i], 2));
		}
		return arrC;
	}

	float* findAndReplaceLargest(float arr[], int arraySize) {
		float summ = 0;
		float avarage = 0;
		float largest = 0;
		int indexOfLargest = 0;

		for (int i = 0; i < arraySize; i++)
		{
			if (largest < arr[i])
			{
				largest = arr[i];
				indexOfLargest = i;

			}
			summ += arr[i];
		}
		avarage = summ / arraySize;
		cout << "avarage:  " << avarage << endl;
		arr[indexOfLargest] = avarage;

		return arr;
	}



	void printArray(float arr[], int arraySize) {
		for (int i = 0; i < arraySize; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	


	int main()
	{
		float *pointerA;
		float *pointerB;
		float *pointerC;
		float a[10] = {1, 0.2, -0.5, 4, -12.3, 6, 7, 8, 9, 10};
		float b[10] = { 1, 1.2, -0.6, 213,123, -213.4312, 2, 321, 23, 12};
		float c[10]{};
		pointerA = a;
		pointerB= b;
		pointerC = c;

		pointerC = generateCArray(pointerA, pointerB, pointerC, 10);
		printArray(pointerC, 10);
		pointerC = findAndReplaceLargest(pointerC, 10);
		printArray(pointerC, 10);

		return true;
	}
