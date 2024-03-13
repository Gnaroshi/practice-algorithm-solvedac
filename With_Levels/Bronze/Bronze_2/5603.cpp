// problem: 問題2
// id: 5603
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s, t;
    cin >> n >> s;

    while (n--)
    {
        t = "";
        int iter = s.length(), cnt = 1;
        char bef = s[0];
        for (int i = 1; i < iter; i++)
        {
            if (s[i] != bef)
            {
                t += to_string(cnt);
                t += bef;
                cnt = 1;
            }
            else
                cnt++;
            bef = s[i];
        }
        t += to_string(cnt);
        t += bef;
        s = t;
    }
    cout << s;

    return 0;
}