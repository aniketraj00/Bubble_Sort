#include <iostream>

void bubbleSort(int* arr, size_t length);
void printArr(int* arr, size_t length);
void swap(int* arr, size_t idx1, size_t idx2);

int main() {
	const size_t size = 10;
	int arr[size]{5,1,3,6,4,2,8,9,7,10};
	printArr(arr, size);
	bubbleSort(arr, size);
	printArr(arr, size);
	return 0;
}

void bubbleSort(int* arr, size_t length) {
	bool swapped = false;
	for (size_t i = 0; i < (length - 1); i++) {
		for (size_t j = 0; j < (length - (i + 1)); j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j, j + 1);
				swapped = true;
			}
		}
		if (!swapped) break;
		else swapped = false;
	}
}

void swap(int* arr, size_t idx1, size_t idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

void printArr(int* arr, size_t length) {
	std::cout << "\n[";
	for (size_t i = 0; i < length; i++) {
		i == (length - 1) ? std::cout << arr[i] : std::cout << arr[i] << "  ";
	}
	std::cout << "]\n";
}
