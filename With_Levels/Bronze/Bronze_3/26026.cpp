// problem: Coffee Cup Combo
// id: 26026
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    int iter = s.length();
    int t = 0;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
            t = 2;
        }
        else if (t != 0)
        {
            cnt++;
            t--;
        }
    }
    cout << cnt;

    return 0;
}