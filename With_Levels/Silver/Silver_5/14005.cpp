#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "YES\n";
        return 0;
    }
    int iter = (1 << n);

    int d;
    int mn = 0x7fffffff - 1;
    cin >> d;
    for (int i = 1; i < iter; i++)
    {
        int temp;
        cin >> temp;
        mn = min(temp, mn);
    }
    if (mn <= d)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}