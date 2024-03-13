// problem: 세로읽기
// id: 10798
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s[5];
    string ans = "";
    int mx_len = -1;

    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
        int tlen = s[i].length();
        if (tlen > mx_len)
            mx_len = s[i].length();
    }
    for (int i = 0; i < mx_len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int cur_slen = s[j].length();

            if (i >= cur_slen)
                continue;
            cout << s[j][i];
        }
    }

    return 0;
}