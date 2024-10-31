template<typename T> void exchange_sort(T* array, int array_size) {
	T time_element;
	for (int i = 0; i < (array_size - 1); i++) {
		for (int j = i + 1; j < array_size; j++) {
			if (array[j] < array[i]) {
				time_element = array[i];
				array[i] = array[j];
				array[j] = time_element;
			}
		}
	}
}