#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// int solve(vector<int> &arr, int target)
// {
//     // bace case
//     if (target == 0)
//     {
//         return 0;
//     }
//     if (target < 0)
//     {
//         return INT_MAX;
//     }
//     int mini = INT_MAX;
//     for (int i = 0; i < 3; i++)
//     {
//         int ans = solve(arr, target - arr[i]);
//         if (ans != INT_MAX)
//         {
//             mini = (mini, ans + 1);
//         }
//     }
//     return mini;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 5};
//     int target = 5;
//     int ans = solve(arr, target);
//     cout << "Ans is: " << ans;
//     return 0;
// }

// --------- Q.2 ---------

// int solve(int n, int x, int y, int z)
// {
//     // bace case
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n < 0)
//     {
//         return INT_MIN;
//     }
//     int ans1 = solve(n - x, x, y, z) + 1;
//     int ans2 = solve(n - y, x, y, z) + 1;
//     int ans3 = solve(n - z, x, y, z) + 1;

//     int ans = max(ans1, max(ans2, ans3));
//     return ans;
// }
// int main()
// {
//     int n = 8;
//     int x = 3;
//     int y = 3;
//     int z = 3;

//     int ans = solve(n, x, y, z);
//     // ans-> valid && unvalid

//     if (ans < 0)
//     {
//         ans = 0;
//     }

//     cout << "Ans is: " << ans << endl;

//     return 0;
// }

// ---------- Q.3 -----------

void solve(vector<int> &arr, int i, int sum, int &maxi)
{
    // bace case
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    // include
    solve(arr, i + 2, sum + arr[i], maxi);
    // exclude
    solve(arr, i + 1, sum, maxi);
}
int main()
{
    vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
    int sum = 0;
    int maxi = INT_MIN;

    solve(arr, 0, sum, maxi);

    cout << maxi << endl;

    return 0;
}