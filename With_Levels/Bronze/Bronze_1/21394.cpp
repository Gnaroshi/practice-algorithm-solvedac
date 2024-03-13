// problem: 숫자 카드
// id: 21394
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int cnt[10] = {0}, t, ts = 0, l;
        for (int i = 1; i <= 9; i++)
        {
            cin >> cnt[i];
            ts += cnt[i];
        }
        cnt[9] += cnt[6];
        cnt[6] = 0;
        string s = "";
        for (int i = 9; i >= 1; i--)
            for (int j = cnt[i]; j > 0; j--)
                s += char(i + '0');
        deque<char> a, b;
        char c;

        l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (i % 2)
                a.push_back(s[i]);
            else
                a.push_front(s[i]);
        }
        for (int i = 0; i < l; i++)
        {
            if (i % 2)
            {
                c = a.back();
                a.pop_back();
                b.push_back(c);
            }
            else
            {
                c = a.front();
                a.pop_front();
                b.push_front(c);
            }
        }
        for (int i = 0; i < l; i++)
        {
            cout << b.front() << (i != l - 1 ? ' ' : '\n');
            b.pop_front();
        }
    }

    return 0;
}