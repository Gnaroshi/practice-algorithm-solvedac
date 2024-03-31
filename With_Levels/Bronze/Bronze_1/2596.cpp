// problem: 비밀편지
// id: 2596
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

string p[8] = {"000000",
               "001111",
               "010011",
               "011100",
               "100110",
               "101001",
               "110101",
               "111010"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s, t = "", st;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        st = s.substr(i * 6, 6);
        int cnt = 0, l = -1;
        bool chk = true;
        for (int j = 0; j < 8; j++)
        {
            cnt = 0;
            for (int k = 0; k < 6; k++)
            {
                if (st[k] != p[j][k])
                {
                    cnt++;
                    l = k;
                }
            }
            if (cnt <= 1)
            {
                t += char('A' + j);
                chk = false;
                break;
            }
        }
        if (chk)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << t;

    return 0;
}