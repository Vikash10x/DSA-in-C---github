#include <iostream>
#include <vector>
#include <limits.h>
#include <string.h>
using namespace std;

// reverse counting -------------------------------------
// void printReverse(int n)
// {

//     if (n == 0)
//     {
//         return;
//     }

//     cout << n << " ";

//     printReverse(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter the value: ";
//     cin >> n;

//     printReverse(n);

//     return 0;
// }

// factorial --------------
// int fact(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }

//     int ans = n * fact(n - 1);
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value: ";
//     cin >> n;

//     int ans = fact(n);
//     cout << " ans is: " << ans;

//     return 0;
// }

// ------------- Fibonic serics -----------------
// int fib(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     if (n == 2)
//     {
//         return 1;
//     }

//     int ans = fib(n - 1) + fib(n - 2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter your name: ";
//     cin >> n;
//     int ans = fib(n);
//     cout << n << "th of value is " << ans << endl;
// }

// ------------- ClimbStairs--------

// int climbStairs(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }

//     return climbStairs(n - 1) + climbStairs(n - 2);
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int ans = climbStairs(n);
//     cout << "Answer is: " << ans;
// }

// ----------- PrintArray ---------
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
//     int arr[5] = {10, 20, 30, 40, 50};
//     int n = 5;
//     int i = 0;
//     printArray(arr, n, i);
// }

// --------------Maximum number of array --------------

void findmax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findmax(arr, n, i + 1, maxi);
}
void findmin(int arr[], int n, int i, int &mini)
{
    // bace case
    if (i >= n)
    {
        return;
    }

    // 1 case solve karna padega
    mini = min(mini, arr[i]);

    // baaki recursion sambhal lega
    findmin(arr, n, i + 1, mini);
}

int main()
{
    int arr[] = {10, 24, 32, 12, 56, 42, 89, 9};
    int n = 8;

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;

    findmax(arr, n, i, maxi);
    findmin(arr, n, i, mini);

    cout << "maximum number is: " << maxi << endl;
    cout << "minimum number is: " << mini;
}

//------------ Check Key --------------

// void checkValue(string str, int n, int i, int key, int &count)
// {
//     // base case
//     if (i >= n)
//     {
//         return;
//     }
//     // base case
//     if (str[i] == key)
//     {
//         // cout << "found at: " << i << endl;
//         // ans.push_back(i);
//         count++;
//     }
//     return checkValue(str, n, i + 1, key, count);
// }

// int main()
// {
//     string str = "vikashkumawat";
//     int n = str.length();

//     char key = 'k';
//     int i = 0;
//     // vector<int> ans;
//     int count = 0;

//     checkValue(str, n, i, key, count);

//     cout << count;
//     // cout << "printing ans:" << endl;
//     // for (auto val : ans)
//     // {
//     //     cout << val << " ";
//     // }
// }

// printDigits -----------------

// void printDigit(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return;
//     }
//     int digit = n % 10;
//     cout << digit << " ";

//     printDigit(n / 10);
// }
// int main()
// {
//     int n = 567;

//     printDigit(n);
// }