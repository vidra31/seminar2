template<typename T> void selection_sort(T* array, int array_size) {

	int minch = 0;
	T time;

	for (int i = 0; i < (array_size - 1); i++) {
		minch = i;

		for (int j = i + 1; j < array_size; j++) {
			if (array[j] < array[minch]) {
				minch = j;
			}
		}

		if (minch != i) {
			time = array[i];
			array[i] = array[minch];
			array[minch] = time;

		}
	}
}