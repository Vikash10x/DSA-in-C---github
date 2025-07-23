#include <iostream>
#include <vector>
using namespace std;

// bool checkArray(vector<int> &v, int &n, int i)
// {
//     // base case
//     if (i == n - 1)
//     {
//         return true;
//     }
//     if (v[i + 1] < v[i])
//     {
//         return false;
//     }
//     return checkArray(v, n, i + 1);
// }
// int main()
// {
//     vector<int> v = {10, 20, 30, 40, 50};
//     int size = v.size();
//     int i = 0;
//     bool isSorted = checkArray(v, size, i);
//     if (isSorted)
//     {
//         cout << "Array is sortred: " << endl;
//     }
//     else
//     {
//         cout << "Array is not sorted: " << endl;
//     }

//     return 0;
// }

// -------- Binary Search -------------

// int binarySearch(vector<int> arr, int s, int e, int key)
// {
//     // bass case
//     if (s > e)
//     {
//         return -1;
//     }
//     int mid = (s + e) / 2;
//     if (arr[mid] == key)
//     {
//         return mid;
//     }
//     if (key < arr[mid])
//     {
//         int ans = binarySearch(arr, s, mid - 1, key);
//         return ans;
//     }
//     if (key > arr[mid])
//     {
//         int ans = binarySearch(arr, mid + 1, e, key);
//         return ans;
//     }
// }
// int main()
// {

//     vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     int target = 70;

//     int ans = binarySearch(arr, s, e, target);
//     cout << "Found it: " << ans;

//     return 0;
// }

// -------------- PrintString -------------

void printString(string str, string output, int i, vector<string> &v)
{
    // bace case
    if (i >= str.length())
    {
        // cout << output << endl;
        v.push_back(output);
        return;
    }
    // exclude
    printString(str, output, i + 1, v);

    // include
    output.push_back(str[i]);
    printString(str, output, i + 1, v);
}

int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    vector<string> v;

    printString(str, output, i, v);

    cout << "Print all subsquense: " << endl;
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl
         << "size of subsiquence: " << v.size() << endl;

    return 0;
}