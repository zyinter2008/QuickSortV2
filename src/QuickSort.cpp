#include "QuickSort.h"

void QuickSort::sort(int **array, int count) {
	quickSort(array, 0, count - 1);
}

void QuickSort::quickSort(int **array, int leftIndex, int rightIndex) {
	int i,j, standard;
	if (leftIndex < rightIndex) {
		i = leftIndex;
		j = rightIndex;
		standard = (*array)[leftIndex];

		do {
			if((*array)[j] >= standard && i < j){
				j--;
			}

			if(i < j){
				(*array)[i] = (*array)[j];
			}

			if((*array)[i] <= standard && i < j){
				i++;
			}

			if(i<j){
				(*array)[j] = (*array)[i];
			}

		}while(i!=j);

		(*array)[i] = standard;
		quickSort(array, leftIndex, i - 1);
		quickSort(array, i + 1, rightIndex);
	}
}
