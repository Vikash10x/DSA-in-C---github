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

// void maxProfitFind(vector<int> &prices, int i, int &minPrice, int &maxProfit)
// {
//     // bace case
//     if (i == prices.size())
//     {
//         return;
//     }

//     // 1 case soln
//     if (prices[i] < minPrice)
//     {
//         minPrice = prices[i];
//     }
//     int todayProfit = prices[i] - minPrice;
//     if (todayProfit > maxProfit)
//     {
//         maxProfit = todayProfit;
//     }
//     // RR
//     maxProfitFind(prices, i + 1, minPrice, maxProfit);
// }
// int main()
// {
//     vector<int> prices{4, 8, 1, 9, 3};
//     int minPrice = INT_MAX;
//     int maxProfit = INT_MIN;
//     maxProfitFind(prices, 0, minPrice, maxProfit);
//     cout << "Max profit is: " << maxProfit << endl;
//     return 0;
// }

// --------- integer to English Words ---------

// vector<pair<int, string>> mp = {{1000000000, "Billion"}, {1000000, "Million"}, {1000, "Thousand"}, {100, "Hundred"}, {90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, {20, "Twenty"}, {19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, {10, "Ten"}, {9, "Nine"}, {8, "Eight"}, {7, "Seven"}, {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"}, {2, "Two"}, {1, "One"}};

// string numberToWords(int num)
// {
//     if (num == 0)
//     {
//         return "Zero";
//     }

//     for (auto it : mp)
//     {
//         if (num >= it.first)
//         {
//             string a = "";
//             if (num >= 100)
//             {
//                 a = numberToWords(num / it.first) + " ";
//             }

//             string b = it.second;

//             string c = "";
//             if (num % it.first != 0)
//             {
//                 c = " " + numberToWords(num % it.first);
//             }
//             return a + b + c;
//         }
//     }
//     return "";
// }
// int main()
// {
//     int num;
//     cin >> num;
//     string ans = numberToWords(num);
//     cout << "Ans is: " << ans << endl;

//     return 0;
// }

// ------------- Wildcard Matching -------------

bool isMatchHelper(string &s, int si, string &p, int pi)
{
    if (si == s.size() && pi == p.size())
    {
        return true;
    }

    if (si == s.size() && pi < p.size())
    {
        while (pi < p.size())
        {
            if (p[pi] != '*')
                return false;
            pi++;
        }
        return true;
    }

    if (s[si] == p[pi] || '?' == p[pi])
    {
        return isMatchHelper(s, si + 1, p, pi + 1);
    }

    if (p[pi] == '*')
    {
        bool caseA = isMatchHelper(s, si, p, pi + 1);

        bool caseB = isMatchHelper(s, si + 1, p, pi);
        return caseA || caseB;
    }

    return false;
}
int main()
{
    string s = "abcdef";
    string p = "*****";

    int si = 0;
    int pi = 0;

    bool ans = isMatchHelper(s, si, p, pi);
    cout << "Ans is: " << ans << endl;
    return 0;
}