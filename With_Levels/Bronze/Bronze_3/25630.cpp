// problem: 팰린드롬 소떡소떡
// id: 25630
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter, it;
    string s;
    cin >> n >> s;
    iter = s.length() / 2;
    it = s.length() - 1;
    int cnt = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] != s[it - i])
            cnt++;
    }
    cout << cnt;

    return 0;
}