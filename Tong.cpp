#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    cout << "Tong la: " << sum;
}