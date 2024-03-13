// problem: 運動会 (Sports Day)
// id: 24088
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, w = 0;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            w++;
    }
    if (w < k)
        cout << 'R';
    else
        cout << 'W';

    return 0;
}