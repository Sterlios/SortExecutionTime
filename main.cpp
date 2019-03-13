#include <iostream>
#include <ctime>
#include "SortClass.h"

using namespace std;

int main() {
	unsigned int start_time;
	unsigned int end_time;
	unsigned int program_time;
	unsigned int **times = new unsigned int *[5];
	for (int i = 0; i < 5; i++)
	{
		times[i] = new unsigned int [4];
	}

	SortClass Arr1(10);
	SortClass Arr2(100);
	SortClass Arr3(1000);
	SortClass Arr4(10000);
	SortClass Arr5(100000);
	Arr1.Bubble_Sort();
	//Для массива размером 10 элементов
	cout << "Array[10]" << endl;
	start_time = clock();
	Arr1.Bubble_Sort();
	end_time = clock();
	times[0][0] = end_time - start_time;
	cout << "Bubble Sort: " << times[0][0] << endl;

	start_time = clock();
	Arr1.Insertion_Sort();
	end_time = clock();
	times[0][1] = end_time - start_time;
	cout << "Insertion Sort: " << times[0][1] << endl;

	start_time = clock();
	Arr1.Selection_Sort();
	end_time = clock();
	times[0][2] = end_time - start_time;
	cout << "Selection Sort: " << times[0][2] << endl;

	start_time = clock();
	Arr1.Merge_Sort();
	end_time = clock();
	times[0][3] = end_time - start_time;
	cout << "Merge Sort: " << times[0][3] << endl;

	//Для массива размером 100 элементов
	cout << endl << "Array[100]" << endl;
	start_time = clock();
	Arr2.Bubble_Sort();
	end_time = clock();
	times[1][0] = end_time - start_time;
	cout << "Bubble Sort: " << times[1][0] << endl;
	
	start_time = clock();
	Arr2.Insertion_Sort();
	end_time = clock();
	times[1][1] = end_time - start_time;
	cout << "Insertion Sort: " << times[1][1] << endl;

	start_time = clock();
	Arr2.Selection_Sort();
	end_time = clock();
	times[1][2] = end_time - start_time;
	cout << "Selection Sort: " << times[1][2] << endl;

	start_time = clock();
	Arr2.Merge_Sort();
	end_time = clock();
	times[1][3] = end_time - start_time;
	cout << "Merge Sort: " << times[1][3] << endl;

	//Для массива размером 1000 элементов
	cout <<endl<< "Array[1000]" << endl;
	start_time = clock();
	Arr3.Bubble_Sort();
	end_time = clock();
	times[2][0] = end_time - start_time;
	cout << "Bubble Sort: " << times[2][0] << endl;

	start_time = clock();
	Arr3.Insertion_Sort();
	end_time = clock();
	times[2][1] = end_time - start_time;
	cout << "Insertion Sort: " << times[2][1] << endl;

	start_time = clock();
	Arr3.Selection_Sort();
	end_time = clock();
	times[2][2] = end_time - start_time;
	cout << "Selection Sort: " << times[2][2] << endl;

	start_time = clock();
	Arr3.Merge_Sort();
	end_time = clock();
	times[2][3] = end_time - start_time;
	cout << "Merge Sort: " << times[2][3] << endl;

	//Для массива размером 10000 элементов
	cout <<endl<< "Array[10000]" << endl;
	start_time = clock();
	Arr4.Bubble_Sort();
	end_time = clock();
	times[3][0] = end_time - start_time;
	cout << "Bubble Sort: " << times[3][0] << endl;

	start_time = clock();
	Arr4.Insertion_Sort();
	end_time = clock();
	times[3][1] = end_time - start_time;
	cout << "Insertion Sort: " << times[3][1] << endl;

	start_time = clock();
	Arr4.Selection_Sort();
	end_time = clock();
	times[3][2] = end_time - start_time;
	cout << "Selection Sort: " << times[3][2] << endl;

	start_time = clock();
	Arr4.Merge_Sort();
	end_time = clock();
	times[3][3] = end_time - start_time;
	cout << "Merge Sort: " << times[3][3] << endl;

	//Для массива размером 100000 элементов
	cout << endl<< "Array[100000]" << endl;
	start_time = clock();
	Arr5.Bubble_Sort();
	end_time = clock();
	times[4][0] = end_time - start_time;
	cout << "Bubble Sort: " << times[4][0] << endl;

	start_time = clock();
	Arr5.Insertion_Sort();
	end_time = clock();
	times[4][1] = end_time - start_time;
	cout << "Insertion Sort: " << times[4][1] << endl;

	start_time = clock();
	Arr5.Selection_Sort();
	end_time = clock();
	times[4][2] = end_time - start_time;
	cout << "Selection Sort: " << times[4][2] << endl;

	start_time = clock();
	Arr5.Merge_Sort();
	end_time = clock();
	times[4][3] = end_time - start_time;
	cout << "Merge Sort: " << times[4][3] << endl;

	return 0;
}
