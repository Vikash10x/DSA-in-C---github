#include <iostream>
#include <string.h>
#include <limits.h>
#include <vector>
using namespace std;

// void countOccureceLTR(string &str, int i, int x, vector<int> &ans)
// {
//     // bace case
//     if (i >= str.length())
//     {
//         return;
//     }

//     if (str[i] == x)
//     {
//         ans.push_back(i);
//     }

//     countOccureceLTR(str, i + 1, x, ans);
// }

// void countOccureceRTL(string &str, int i, int x, vector<int> &ans)
// {
//     // bace case
//     if (i < 0)
//     {
//         return;
//     }

//     if (str[i] == x)
//     {
//         ans.push_back(i);
//         return;
//     }

//     countOccureceRTL(str, i - 1, x, ans);
// }

// int main()
// {
// string str;
// cin >> str;
// char x;
// cin >> x;
// int i = 0;

// vector<int> ans;
// countOccureceLTR(str, i, x, ans);
// for (int index : ans)
// {
//     cout << "found at index: " << index << endl;
// }

//     string str;
//     cin >> str;
//     char x;
//     cin >> x;
//     int i = str.size();

//     vector<int> ans;
//     countOccureceRTL(str, i, x, ans);
//     for (int index : ans)
//     {
//         cout << "found at index: " << index << endl;
//     }
//     return 0;
// }

// --------- Reverse ----------

// void reverse(string &s, int start, int end)
// {
//     // bace case
//     if (start >= end)
//     {
//         return;
//     }
//     // ek case solve kar do
//     swap(s[start], s[end]);

//     // baaki recursion shambal lega
//     reverse(s, start + 1, end - 1);
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int start = 0;
//     int end = s.size() - 1;
//     reverse(s, start, end);
//     cout << s;
//     return 0;
// }

// --------- Print All Subarrays ----------

// void subArray(vector<int> &num, int start, int end)
// {
//     // base case
//     if (end == num.size())
//     {
//         return;
//     }

//     // 1 case solved
//     for (int i = start; i <= end; i++)
//     {
//         cout << num[i] << " ";
//     }

//     cout << endl;

//     // Recursive call
//     subArray(num, start, end + 1);
// }

// void printArray(vector<int> &num)
// {
//     for (int start = 0; start < num.size(); start++)
//     {
//         int end = start;
//         subArray(num, start, end);
//     }
// }

// int main()
// {
//     vector<int> num{1, 2, 3, 4, 5};

//     // You can call either of these:
//     // subArray(num, 0, 0);
//     printArray(num);

//     return 0;
// }

// --------------- LeetCode 121 que ---------

void maxProfitFind(vector<int> &prices, int i, int &minPrice, int &maxProfit)
{
    // bace case
    if (i == prices.size())
    {
        return;
    }

    // 1 case soln
    if (prices[i] < minPrice)
    {
        minPrice = prices[i];
    }
    int todayProfit = prices[i] - minPrice;
    if (todayProfit > maxProfit)
    {
        maxProfit = todayProfit;
    }
    // RR
    maxProfitFind(prices, i + 1, minPrice, maxProfit);
}
int main()
{
    vector<int> prices{4, 8, 1, 9, 3};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    maxProfitFind(prices, 0, minPrice, maxProfit);
    cout << "Max profit is: " << maxProfit << endl;
    return 0;
}