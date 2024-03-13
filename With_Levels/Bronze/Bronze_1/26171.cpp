// problem: An Interactive Problem
// id: 26171
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int mx = -1, n;
    string s;

    for (n = 1;; n++)
    {
        cout << "? " << 1 << ' ' << n << '\n';
        cin >> s;
        if (s[0] != 'A')
            mx = max(mx, stoi(s));
        else
            break;
    }

    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << "? " << i << ' ' << j << '\n';
            cin >> s;
            mx = max(mx, stoi(s));
        }
    }
    cout << "! " << mx << '\n';
    return 0;
}