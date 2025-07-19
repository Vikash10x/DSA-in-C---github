#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr, int n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i + 1] < arr[i])
    {
        return false;
    }
    checkSorted(arr, n, i + 1);
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60};
    int n = v.size();
    int i = 0;
    bool issorted = checkSorted(v, n, i);

    if (issorted)
    {
        cout << "Array is sorted: " << endl;
    }
    else
    {
        cout << "Array is not sorted: ";
    }

    return 0;
}