// problem: A번 - 진주로 가자! (Hard)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int tp[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, jj;
    long long t;
    string s;
    cin >> n;
    bool chk = true;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        if (t > 1000)
        {
            cnt++;
            continue;
        }
        if (chk && s == "jinju")
        {
            chk = false, jj = t;
        }
        if (chk)
        {
            tp[t]++;
        }
        else if (jj < t)
            cnt++;
    }
    for (int i = 1000; i > 0; i--)
    {
        if (i <= jj)
            break;
        cnt += tp[i];
    }
    cout << jj << '\n'
         << cnt << '\n';

    return 0;
}