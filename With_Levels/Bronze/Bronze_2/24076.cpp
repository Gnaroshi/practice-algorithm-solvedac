// problem: IOI 文字列 (IOI String)
// id: 24076
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
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            if (s[i] != 'O')
                cnt++;
        }
        else
        {
            if (s[i] != 'I')
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}