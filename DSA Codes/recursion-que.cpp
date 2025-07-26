#include <iostream>
#include <string.h>
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

void reverse(string &s, int start, int end)
{
    // bace case
    if (start >= end)
    {
        return;
    }
    // ek case solve kar do
    swap(s[start], s[end]);

    // baaki recursion shambal lega
    reverse(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    int start = 0;
    int end = s.size() - 1;
    reverse(s, start, end);
    cout << s;
    return 0;
}