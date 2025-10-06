#include <iostream>
#include <vector>
using namespace std;

// int partition(int arr[], int s, int e)
// {
//     // step 1. Choose pivot element
//     int pivotIndex = s;
//     int pivotElement = arr[s];

//     // step 2. find right positio for pivot Element and place it there
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] <= pivotElement)
//         {
//             count++;
//         }
//     }
//     // jab pivot ke bhar aau to mere pass pivot ki right position ka index ready hai
//     int rightIndex = s + count;
//     swap(arr[pivotIndex], arr[rightIndex]);
//     pivotIndex = rightIndex;

//     // step 3. left me chote and right me bade
//     int i = s;
//     int j = e;

//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] <= pivotIndex)
//         {
//             i++;
//         }
//         while (arr[j] > pivotIndex)
//         {
//             j--;
//         }
//     }

//     if (i < pivotIndex && j > pivotIndex)
//     {
//         swap(arr[i], arr[j]);
//     }

//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }

//     // Partition
//     int p = partition(arr, s, e);

//     // sort of left array
//     quickSort(arr, s, p - 1);

//     // sort of right array
//     quickSort(arr, p + 1, e);
// }
// int main()
// {
//     int arr[] = {8, 1, 2, 3, 20, 50, 35};
//     int n = 7;

//     int s = 0;
//     int e = n - 1;
//     quickSort(arr, s, e);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ---------- BAck Tracking -----------

string backTracking(string str, int i)
{
    // Base case
    if (i >= str.length())
    {
        cout << str << " ";
    }

    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        // recursive call
        backTracking(str, i + 1);
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "pqrs";
    int i = 0;
    cout << endl;
    backTracking(str, i);
    cout << endl;
    return 0;
}