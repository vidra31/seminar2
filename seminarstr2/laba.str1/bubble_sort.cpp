template<typename T> void bubble_sort(T* array, int array_size) {
	T time_element;
	for (int i = 0; i < (array_size); i++) {
		for (int j = 0; j < (array_size - i - 1); j++) {
			if (array[j] > array[j + 1]) {
				time_element = array[j];
				array[j] = array[j + 1];
				array[j + 1] = time_element;
			}
		}
	}
}