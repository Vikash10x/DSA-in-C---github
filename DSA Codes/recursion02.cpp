#include <iostream>
#include <vector>
using namespace std;

// bool checkSorted(vector<int> &arr, int n, int i)
// {
//     if (i == n - 1)
//     {
//         return true;
//     }
//     if (arr[i + 1] < arr[i])
//     {
//         return false;
//     }
//     checkSorted(arr, n, i + 1);
// }

// int main()
// {
//     vector<int> v{10, 20, 30, 40, 50, 60};
//     int n = v.size();
//     int i = 0;
//     bool issorted = checkSorted(v, n, i);

//     if (issorted)
//     {
//         cout << "Array is sorted: " << endl;
//     }
//     else
//     {
//         cout << "Array is not sorted: ";
//     }

// int checkStair(int n)
// {
//     // base case
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     int ans = checkStair(n - 1) + checkStair(n - 2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int ans = checkStair(n);
//     cout << "Answer is: " << ans;
//     return 0;
// }

//-------- Print Array --------

void printArray(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 0;
    printArray(arr, n, i);

    return 0;
}