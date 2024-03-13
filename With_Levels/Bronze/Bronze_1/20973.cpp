// problem: Uddered but not Herd
// id: 20973
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, iter;
    string fj, s;
    cin >> fj >> s;
    iter = s.length();
    for (int i = 0; i < iter;)
    {
        ans++;
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == fj[j])
                i++;
            if (i == iter)
                break;
        }
    }
    cout << ans;

    return 0;
}