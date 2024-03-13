// problem: 비밀편지
// id: 2596
// time taken:
#include <bits/stdc++.h>
using namespace std;

char al[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
string alp[8] = {
    "000000",
    "001111",
    "010011",
    "011100",
    "100110",
    "101001",
    "110101",
    "111010",
};

int cal(string s)
{
    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 6; j++)
        {
            cnt += (alp[i][j] != s[j]);
        }
        if (cnt <= 1)
        {
            return i;
        }
    }
    return 10;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    string s, ans = "";
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        t = cal(s.substr(i * 6, 6));
        if (t == 10)
        {
            cout << i + 1;
            return 0;
        }
        else
            ans += al[t];
    }
    cout << ans;

    return 0;
}