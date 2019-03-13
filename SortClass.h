#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class SortClass
{
public:
	SortClass();
	SortClass(int size);
	~SortClass();

	void Bubble_Sort();
	void Insertion_Sort();
	void Selection_Sort();
	void Merge_Sort();
	void merge(int low, int high, int *arr);
	void merge_s(int low,int mid,int high, int *arr);

	void PrintArr();
	int array_size;
	int *array;
	void initArray();

};

