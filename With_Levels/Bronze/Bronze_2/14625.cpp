// problem: 냉동식품
// id: 14625
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h1, m1, h2, m2, n, cnt = 0;
    cin >> h1 >> m1 >> h2 >> m2 >> n;
    string a, b;
    char c = char(n + '0');
    while (true)
    {
        if (h1 == h2 && m1 == m2)
            break;
        a = to_string(h1), b = to_string(m1);
        a += b;
        if (h1 < 10 || m1 < 10)
            a += '0';
        for (auto i : a)
        {
            if (i == c)
            {
                cnt++;
                break;
            }
        }
        m1++;
        if (m1 == 60)
            m1 = 0, h1++;
    }
    a = to_string(h1), b = to_string(m1);
    a += b;
    if (h1 < 10 || m1 < 10)
        a += '0';
    for (auto i : a)
    {
        if (i == c)
        {
            cnt++;
            break;
        }
    }
    cout << cnt;

    return 0;
}