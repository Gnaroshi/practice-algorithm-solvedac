// problem: Affine Cipher
// id: 11575
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            cout << char(((a * (s[i] - 'A') + b) % 26) + 'A');
        }
        cout << '\n';
    }

    return 0;
}