#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key)
{
    if(left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if(arr[mid] == key)
        return mid;

    if(key < arr[mid])
        return binarySearch(arr, left, mid - 1, key);

    return binarySearch(arr, mid + 1, right, key);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;

    printf("Array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    index = binarySearch(arr, 0, size - 1, key);

    if(index == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d\n", index);

    return 0;
}