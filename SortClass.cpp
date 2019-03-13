#include "SortClass.h"



SortClass::SortClass()
{
}

SortClass::SortClass(int size)
{
	this->array_size = size;
	initArray();
}


SortClass::~SortClass()
{
}

void SortClass::Bubble_Sort()
{
	int *arr = new int [array_size];
	for (int i = 0; i < array_size; i++)
	{
		arr[i] = array[i];
	}
	int counter, k;
	for (k = 1; k < array_size; k++)
	{
		for (counter = 0; counter < array_size - k; counter++)
		{
			if (arr[counter] > arr[counter + 1])
			{
				int a = arr[counter];
				arr[counter] = arr[counter + 1];
				arr[counter + 1] = a;
			}
		}
	}
}
void SortClass::Insertion_Sort()
{
	int *arr = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		arr[i] = array[i];
	}
	for (int i = 1; i < array_size; i++)
	{
		int a = arr[i];
		int j = i;
		while (j > 0 && arr[j - 1] > a)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = a;
	}
}
void SortClass::Selection_Sort()
{
	int *arr = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		arr[i] = array[i];
	}
	for (int i = 0; i < array_size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < array_size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int a = arr[min];
			arr[min] = arr[i];
			arr[i] = a;
		}
	}
}
void SortClass::Merge_Sort()
{
	int *arr = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		arr[i] = array[i];
	}
	merge(0, array_size, arr);
}
void SortClass::merge(int low, int high, int *arr)
{
	int mid;
	if (low < high)
	{
		mid = low + (high - low) / 2;
		merge(low, mid, arr);
		merge(mid + 1, high, arr);
		merge_s(low, mid, high, arr);
	}
}
void SortClass::merge_s(int low, int mid, int high, int *arr)
{
	int h, i, j, k;
	int *b = new int[high];
	h = low;
	i = low;
	j = mid + 1; 
	while ((h <= mid) && (j <= high))
	{
		if (arr[h] <= arr[j])
		{
			b[i] = arr[h];
			h++;
		}
		else
		{
			b[i] = arr[j];
			j++;
		}
		i++;
	}
	if (h > mid)
	{
		for (k = j; k <= high; k++)
		{
			b[i] = arr[k];
			i++;
		}
	}
	else
	{
		for (k = h; k <= mid; k++)
		{
			b[i] = arr[k];
			i++;
		}
	}
	for (k = low; k <= high; k++) arr[k] = b[k];
}
void SortClass::PrintArr()
{
	for (int i = 0; i < array_size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}


void SortClass::initArray()
{
	srand(time(0));
	array = new int[array_size];
	for (int counter = 0; counter < array_size; counter++)
	{
		array[counter] = rand() % 90 + 10;
	}

}
