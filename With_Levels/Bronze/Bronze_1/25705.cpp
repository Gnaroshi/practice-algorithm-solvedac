// problem: 돌림판 문자열
// id: 25705
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool canMake(string a, string b)
{
    bool ca[26] = {0}, cb[26] = {0};
    for (auto i : a)
        ca[i - 'a'] = 1;
    for (auto i : b)
        cb[i - 'a'] = 1;
    for (int i = 0; i < 26; i++)
    {
        if (ca[i] != cb[i] && cb[i])
            return false;
    }
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cur, idx = 0;
    string a, b;
    cin >> n >> a >> m >> b;
    cur = n - 1;
    if (!canMake(a, b))
    {
        cout << -1;
        return 0;
    }
    while (true)
    {
        cur++;
        if (a[cur % n] == b[idx])
        {
            idx++;
            if (idx == m)
                break;
        }
    }
    cout << cur - n + 1;

    return 0;
}