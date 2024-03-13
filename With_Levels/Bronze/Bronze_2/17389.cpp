// problem: 보너스 점수
// id: 17389
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, bn = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'O')
        {
            ans += i + 1 + bn;
            bn++;
        }
        else
            bn = 0;
    }
    cout << ans;

    return 0;
}