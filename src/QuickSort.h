#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#include <iostream>
using namespace std;

class QuickSort {
public:

	void sort(int **array, int count);

private:
	void quickSort(int **array, int leftIndex, int rightIndex);
};

#endif /* QUICKSORT_H_ */
