// problem: Итоговая оценка
// id: 28980
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int tot = 0, a, b, w;
    bool chk[26] = {0};
    for (auto i : s)
    {
        tot += int(i);
        chk[i - 'A'] = 1;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (chk[i])
        {
            w = i;
            break;
        }
    }
    w += 'A';

    a = tot / s.length(), b = tot % s.length();
    if (b * 2 > s.length())
        a++;

    cout << char(max(w - 1, a));

    return 0;
}