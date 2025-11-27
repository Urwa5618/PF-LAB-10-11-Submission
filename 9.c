#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index == size) return -1;
    if (arr[index] == target) return index;
    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {3, 8, 12, 5, 9};
    int target = 5;

    int res = linearSearch(arr, 5, target, 0);

    if (res == -1) printf("Not Found");
    else printf("Found at index %d", res);
}
