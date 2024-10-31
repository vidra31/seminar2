template<typename T> void optimized_bubble_sort(T* array, int array_size) {

	bool flag;

	int time_array_size = 0;
	int array_end = array_size;
	T time_element;

	for (int i = 0; i < array_size; i++) {

		flag = false;

		for (int j = 0; j < (array_end - 1); j++) {
			if (array[j] > array[j + 1]) {
				time_element = array[j];
				array[j] = array[j + 1];
				array[j + 1] = time_element;

				flag = true;

				time_array_size = j + 1;
			}
		}

		array_end = time_array_size;

		if (!flag) {
			break;
		}
	}
}