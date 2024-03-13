#include <bits/stdc++.h>
using namespace std;

string a, b;
int table[1005][1005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b;
    a.insert(a.begin(), ' ');
    b.insert(b.begin(), ' ');
    int len_mx = max(a.length(), b.length());
    // cout << "a:" << a << " b:" << b << '\n';
    // cout << len_mx << '\n';
    for (int i = 0; i < len_mx; i++)
    {
        for (int j = 0; j < len_mx; j++)
        {
            // cout << "a: " << a[i] << " b: " << b[j] << '\n';
            if (i == 0 || j == 0)
                table[i][j] = 0;
            else if (a[i] == b[j])
                table[i][j] = table[i - 1][j - 1] + 1;
            else
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
        }
    }
    // for (int i = 0; i < len_mx; i++)
    // {
    //     for (int j = 0; j < len_mx; j++)
    //         cout << table[i][j] << ' ';
    //     cout << '\n';
    // }

    cout << table[a.length() - 1][b.length() - 1] << '\n';

    return 0;
}