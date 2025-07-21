#include <iostream>
#include <climits>
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

int checkStair(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int ans = checkStair(n - 1) + checkStair(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ans = checkStair(n);
    cout << "Answer is: " << ans;
    return 0;
}

//-------- Print Array --------

// void printArray(int arr[], int n, int i)
// {
//     if (i >= n)
//     {
//         return;
//     }
//     printArray(arr, n, i + 1);
//     cout << arr[i] << " ";
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int i = 0;
//     printArray(arr, n, i);

//     return 0;
// }

// ------ MAximum number ---------

// void findMax(int arr[], int n, int i, int &maxi)
// {
//     // base case
//     if (i >= n)
//     {
//         return;
//     }
//     if (arr[i] > maxi)
//     {
//         maxi = arr[i];
//     }
//     findMax(arr, n, i + 1, maxi);
// }

// void findMin(int arr[], int n, int i, int &mini)
// {
//     // base case
//     if (i >= n)
//     {
//         return;
//     }
//     if (arr[i] < mini)
//     {
//         mini = arr[i];
//     }
//     findMin(arr, n, i + 1, mini);
// }
// int main()
// {
//     int arr[] = {10, 50, 20, 90, 40, 65, 74, 99};
//     int n = 8;
//     int i = 0;
//     int maxi = INT_MIN;
//     int mini = INT_MAX;
//     findMax(arr, n, i, maxi);
//     findMin(arr, n, i, mini);
//     cout << "Maximum value is: " << maxi << endl;
//     cout << "Minimum value is: " << mini << endl;

//     return 0;
// }

// --------CheckDigit -----------

// void findDigit(string &str, int &n, int i, int key, vector<int> &ans, int &count)
// {
//     if (i >= n)
//     {
//         return;
//     }
//     if (str[i] == key)
//     {
//         // return true;
//         // cout << "found at: " << i << endl;
//         ans.push_back(i);
//         count++;
//         // return i;
//     }
//     findDigit(str, n, i + 1, key, ans, count);
// }
// int main()
// {
//     string str = "vikashkumawat";
//     int n = str.length();
//     int i = 0;
//     char key = 'a';
//     vector<int> ans;
//     int count = 0;

//     findDigit(str, n, i, key, ans, count);
//     cout << "Count is: " << count << endl;
//     cout << "Printing as: " << endl;
//     for (auto val : ans)
//     {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// -------- Printreverse -----------

// void printFun(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     // ek case solve kardo
//     printFun(n / 10);
//     int digit = n % 10;
//     cout << digit;
//     // baaki recursion shambal lega
// }
// int main()
// {
//     int n = 902;
//     printFun(n);
//     return 0;
// }
