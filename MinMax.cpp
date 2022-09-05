#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Min, Max
    // /* Max */
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Gia tri lon nhat trong mang la: " << max;

    /* Min */
    // int n;
    // cout << "Nhap vao so nguyen n: ";
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // int min = a[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] < min)
    //     {
    //         min = a[i];
    //     }
    // }
    // cout << "Gia tri nho nhat trong mang la: " << min;
    return 0;
}