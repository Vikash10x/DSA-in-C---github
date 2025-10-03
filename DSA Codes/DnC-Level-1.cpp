#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int s, int e)
{

    int mid = (s + e) / 2;
    // length
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // crate array for lan1, len2 lenght
    int *left = new int[len1];
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // copy logic for left array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // copy logic for right array
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}

void mergeSort(int arr[], int s, int e)
{
    // bace case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // left
    mergeSort(arr, s, mid);

    // right
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {12, 8, 84, 25, 45};
    int n = 5;
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}