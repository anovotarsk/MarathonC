void mx_sort_arr_int(int *arr, int size) {
    int tmp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[i]) {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

