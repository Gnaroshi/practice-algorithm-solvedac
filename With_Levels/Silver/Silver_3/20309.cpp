#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i % 2 == temp % 2)
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';

    return 0;
}