// problem: Гистограмма
// id: 21749
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int cnt[128] = {0};
    while (getline(cin, s))
    {
        for (auto i : s)
        {
            if (i == ' ' || i == '\n')
                continue;
            cnt[i]++;
        }
    }
    int ap = 0, mx = *max_element(cnt, cnt + 128), col = 0, tap;
    for (int i = 0; i < 128; i++)
    {
        if (cnt[i])
            ap++;
    }
    string sh = "", row = "";
    for (int i = 0; i < ap; i++)
        sh += '#';
    vector<string> v(mx);
    fill(v.begin(), v.end(), sh);
    for (int i = 0; i < 128; i++)
    {
        if (cnt[i])
        {
            tap = cnt[i];
            for (int j = 0; j < mx - tap; j++)
            {
                v[j][col] = ' ';
            }
            col++;
            row += char(i);
        }
    }
    for (auto i : v)
        cout << i << '\n';
    cout << row << '\n';

    return 0;
}