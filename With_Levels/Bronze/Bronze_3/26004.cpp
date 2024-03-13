// problem: HI-ARC
// id: 26004
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mn = 100001;
    int cnt[5] = {0};
    string s;
    cin >> n >> s;
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == 'H')
            cnt[0]++;
        else if (s[i] == 'I')
            cnt[1]++;
        else if (s[i] == 'A')
            cnt[2]++;
        else if (s[i] == 'R')
            cnt[3]++;
        else if (s[i] == 'C')
            cnt[4]++;
    }
    for (int i = 0; i < 5; i++)
        mn = min(mn, cnt[i]);
    cout << mn;

    return 0;
}