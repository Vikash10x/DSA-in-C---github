#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[])
{
    cout << "Size inside main function: " << sizeof(arr) << endl;

    cout << "arr: " << arr << endl;
    cout << "&arr: " << &arr << endl;

    arr[0] = 50;
}

void update(int *p)
{
    cout << "Address stored insde p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    *p = *p + 10;
}
int main()
{
    // int a = 5;
    // int *p = &a;
    // cout << sizeof(p) << endl;

    // char ch = 'b';
    // char *c = &ch;
    // cout << sizeof(c) << endl;

    // double d = 5.54;
    // double *dtr = &d;
    // cout << sizeof(dtr) << endl;

    // int a = 5;
    // int *ptr = &a;
    // // copy pointer
    // int *dusraptr = ptr;

    // cout << *ptr << endl;
    // cout << *dusraptr;

    // int a = 10;
    // int *p = &a;
    // int *q = p;
    // int *r = q;

    // cout << a << endl;                   // 10
    // cout << &a << endl;                  // address of a
    // cout << p << endl;                   // address of a
    // cout << &p << endl;                  // address of p
    // cout << *p << endl;                  // 10
    // cout << q << endl;                   // address of a
    // cout << &q << endl;                  // address of q
    // cout << *q << endl;                  // 10
    // cout << r << endl;                   // address of a
    // cout << &r << endl;                  // address of r
    // cout << *r << endl;                  // 10
    // cout << (*p + *q + *r) << endl;      // 30
    // cout << (*p) * 2 + (*r) * 3 << endl; // 50
    // cout << (*p / 2) - (*q / 2) << endl; // 0

    // Array --------------

    // int arr[10] = {12, 32, 53, 9};

    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[2] << endl;

    // int *p = arr;
    // cout << p << endl;
    // cout << &p << endl;

    // cout << *arr << endl;
    // cout << arr[0] << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << arr[1] << endl;
    // cout << *(arr + 2) << endl;
    // cout << arr[2] << endl;
    // cout << *(arr + 3) << endl;
    // cout << arr[3] << endl;

    // Class 2 --------------

    // int arr[5] = {2, 6, 4, 8, 9};
    // int *p = arr + 1;
    // cout << p << endl;

    // char ch[10] = "Vikash";
    // char *c = ch;
    // cout << ch << endl;
    // cout << ch[0] << endl;
    // cout << &ch << endl;

    // cout << c << endl;
    // cout << *c << endl;
    // cout << &c << endl;

    // char name[9] = "Sherbano";
    // char *c = &name[0];

    // cout << name << endl;
    // cout << &name << endl;
    // cout << *(name + 3) << endl;
    // cout << c << endl;
    // cout << &c << endl;
    // cout << *(c + 3) << endl;
    // cout << c + 2 << endl;
    // cout << *c << endl;
    // cout << c + 8 << endl;

    // char ch = 'v';
    // char *c = &ch;
    // cout << c << endl;

    // int arr[10] = {2, 4, 6, 8};

    // cout << "Size inside main function: " << sizeof(arr) << endl;
    // cout << arr << endl;
    // cout << &arr << endl;

    // // printing inside main
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // cout << "now calling solve function " << endl
    //      << endl
    //      << endl
    //      << endl;

    // solve(arr);

    // cout << "vapas main function ma aagaye hai" << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int a = 5;
    cout << "Address of a is: " << &a << endl;
    int *ptr = &a;
    cout << "Address stored in ptr is: " << ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;

    update(ptr);
    cout << "value of a is: " << a << endl;
    return 0;
}