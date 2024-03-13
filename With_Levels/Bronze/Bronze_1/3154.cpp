// problem: 알람시계
// id: 3154
// time taken:
#include <bits/stdc++.h>
using namespace std;

int e[10001];
int b[10][10] = {
    {0, 4, 3, 4, 3, 2, 3, 2, 1, 2},
    {4, 0, 1, 2, 1, 2, 3, 2, 3, 4},
    {3, 1, 0, 1, 2, 1, 2, 3, 2, 3},
    {4, 2, 1, 0, 3, 2, 1, 4, 3, 2},
    {3, 1, 2, 3, 0, 1, 2, 1, 2, 3},
    {2, 2, 1, 2, 1, 0, 1, 2, 1, 2},
    {3, 3, 2, 1, 2, 1, 0, 3, 2, 1},
    {2, 2, 3, 4, 1, 2, 3, 0, 1, 2},
    {1, 3, 2, 3, 2, 1, 2, 1, 0, 1},
    {2, 4, 3, 2, 3, 2, 1, 2, 1, 0}};

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string s, t;
    char c;
    int ef, mn = 0x3f3f3f3f, h, m, ah, am;
    cin >> s;
    h = stoi(s.substr(0, 2));
    m = stoi(s.substr(3, 2));
    for (int i = 0; i < 10000; i++)
    {
        t = to_string(i);
        if (t.length() < 4)
        {
            for (int j = 4 - t.length(); j > 0; j--)
                t.insert(t.begin(), '0');
        }
        c = t[0];
        ef = 0;
        for (int j = 1; j < 4; j++)
        {
            ef += b[t[j] - '0'][c - '0'];
            c = t[j];
        }
        e[i] = ef;
    }

    for (int i = 0; i < 100; i++)
    {
        if (i % 24 == h)
        {
            for (int j = 0; j < 100; j++)
            {
                if (j % 60 == m && mn > e[i * 100 + j])
                {
                    mn = e[i * 100 + j];
                    ah = i;
                    am = j;
                }
            }
        }
    }
    if (ah < 10)
        cout << '0';
    cout << ah << ":";
    if (am < 10)
        cout << '0';
    cout << am << '\n';

    return 0;
}