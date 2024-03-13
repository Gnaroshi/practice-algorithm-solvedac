#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 0, b = 0;
    for (int i = 3; i > 0; i--)
    {
        int temp;
        cin >> temp;
        a += i * temp;
    }
    for (int i = 3; i > 0; i--)
    {
        int temp;
        cin >> temp;
        b += i * temp;
    }
    if (a > b)
        cout << 'A' << '\n';
    else if (a < b)
        cout << 'B' << '\n';
    else
        cout << 'T' << '\n';

    return 0;
}