template<typename T> void insertion_sort(T* array, int array_size) {

	for (int index = 1; index < array_size; index++) {
		int key = array[index];
		int j = index - 1;

		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}