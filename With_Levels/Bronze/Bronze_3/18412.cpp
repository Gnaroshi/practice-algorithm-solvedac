// problem: 文字列の反転 (Inversion of a String)
// id: 18412
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b;
    string s;

    cin >> t >> a >> b;
    cin >> s;
    int iter = s.length();
    for (int i = 0; i < a - 1; i++)
        cout << s[i];
    for (int i = b - 1; i >= a - 1; i--)
        cout << s[i];
    for (int i = b; i < iter; i++)
        cout << s[i];

    return 0;
}
