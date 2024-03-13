// problem: Cryptographer’s Conundrum
// id: 11269
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length(), ans = 0;
    for (int i = 0; i < iter; i += 3)
    {
        if (s[i] != 'P')
            ans++;
        if (s[i + 1] != 'E')
            ans++;
        if (s[i + 2] != 'R')
            ans++;
    }
    cout << ans;

    return 0;
}