// problem: 이진수 연산
// id: 12813
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int iter = a.length();
    for (int i = 0; i < iter; i++)
    {
        if (a[i] == b[i] && a[i] == '1')
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';
    for (int i = 0; i < iter; i++)
    {
        if (a[i] == '1' || b[i] == '1')
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';
    for (int i = 0; i < iter; i++)
    {
        if (a[i] != b[i])
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';
    for (auto i : a)
    {
        if (i == '0')
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';
    for (auto i : b)
    {
        if (i == '0')
            cout << 1;
        else
            cout << 0;
    }
    cout << '\n';

    return 0;
}