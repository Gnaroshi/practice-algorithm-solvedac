// problem: Biosalong
// id: 21360
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bef = -1, mn = 0x3f3f3f3f;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' && bef >= 0)
        {
            mn = min(mn, i - bef - 1);
            bef = i;
        }
        else if (s[i] == '.')
            bef = i;
    }
    cout << mn;

    return 0;
}