// problem: 줄 세우기
// id: 1681
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, cnt = 1, cur = 1;
    cin >> n >> l;
    char L = char('0' + l);
    while (cnt <= n)
    {
        string t = to_string(cur);
        int iter = t.length();
        bool chk = true;
        for (int i = 0; i < iter; i++)
        {
            if (t[i] == L)
            {
                cur++;
                chk = false;
                break;
            }
        }
        if (!chk)
            continue;
        cnt++;
        cur++;
    }
    cout << cur - 1;

    return 0;
}