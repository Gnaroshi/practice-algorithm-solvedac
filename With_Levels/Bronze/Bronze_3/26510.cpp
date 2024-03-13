// problem: V for Vendetta
// id: 26510
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int iter = s.length();
    for (int i = 0; i < iter; i += 2)
    {
        int n = s[i] - '0';
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < j; k++)
                cout << ' ';
            cout << '*';
            for (int k = 0; k < (n - j - 1) * 2 - 1; k++)
                cout << ' ';
            if (j != n - 1)
                cout << '*';
            cout << '\n';
        }
    }

    return 0;
}