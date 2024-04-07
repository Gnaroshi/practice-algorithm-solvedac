// problem: 행복한지 슬픈지
// id: 10769
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    bool chk = false;
    string s;
    getline(cin, s);
    int l = s.length() - 2;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == ':')
        {
            if (s[i + 1] == '-')
            {
                if (s[i + 2] == ')')
                    cnt++, chk = true;
                else if (s[i + 2] == '(')
                    cnt--, chk = true;
            }
        }
    }
    if (chk)
    {
        if (cnt == 0)
            cout << "unsure";
        else if (cnt > 0)
            cout << "happy";
        else
            cout << "sad";
    }
    else
        cout << "none";

    return 0;
}