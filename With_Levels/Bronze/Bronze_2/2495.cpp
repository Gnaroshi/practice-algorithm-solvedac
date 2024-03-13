// problem: 연속구간
// id: 2495
// time taken:
#include <bits/stdc++.h>
using namespace std;
int solv(string s)
{
    int iter = s.length(), mx = 1, cnt = 1;
    char bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        if (s[i] == bef)
            cnt++;
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
        bef = s[i];
    }
    mx = max(mx, cnt);
    return mx;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        cout << solv(s) << '\n';
    }

    return 0;
}