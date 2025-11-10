void reverse(int arr[], int len) {
    for(int i = 0; i < len/2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - i -1];
        arr[len - i - 1] = temp;
    }
}

int LinearSearch(int arr[], int len, int find) {
    for (int i = 0; i < len; i++)
    {
        if(find == arr[i]) {
            return i;
        }
    }
    return -1;
}
