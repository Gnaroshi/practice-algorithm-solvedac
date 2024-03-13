// problem: A번 - 학점계산프로그램
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(5);
    double ans = 0;
    string s;
    cin >> s;
    int iter = s.length(), cnt = 0;
    for (int i = 0; i < iter; i++)
    {
        cnt++;
        double al = 4;
        char c = 'A';
        bool chk = false;
        for (int j = 0; j < 4; j++)
        {
            if (c == s[i])
            {
                chk = true;
                break;
            }
            c++;
            al--;
        }
        if (!chk)
            continue;
        chk = false;
        if (i + 1 < iter)
            if (!isalpha(s[i + 1]))
            {
                chk = true;
                i++;
            }
        ans += al + (chk ? 0.5 : 0);
    }
    cout << ans / (double)cnt;

    return 0;
}