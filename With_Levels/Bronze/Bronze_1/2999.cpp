// problem: 비밀 이메일
// id: 2999
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int l = s.length(), r = 1, c = l;
    for (int i = 1; i <= l; i++)
    {
        if (l % i == 0)
        {
            if (r < i && l / i >= i)
            {
                r = i;
                c = l / r;
            }
        }
    }

    // 1234
    // 1234
    // 1234

    string ret = "";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < l; j += r)
            ret += s[i + j];
    }
    cout << ret;

    return 0;
}