
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}

int main(void)
{
    int n, item;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("\nEnter the searching item: ");
    scanf("%d", &item);
    int result = binarySearch(array, 0, n - 1, item);
    if (result == -1)
        printf("Element is not present in array");
    printf("Element is present at index %d", result + 1);
    return 0;
}
