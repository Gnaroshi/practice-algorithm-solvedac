// problem: Любитель нулей
// id: 27257
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    int cnt = 0;
    for (int i = 0; i < iter; i++)
        if (s[i] == '0')
            cnt++;

    for (int i = iter - 1; i > 0; i--)
    {
        if (s[i] == '0')
            cnt--;
        else
            break;
    }
    cout << cnt;

    return 0;
}