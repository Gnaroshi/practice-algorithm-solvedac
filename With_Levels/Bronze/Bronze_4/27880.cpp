// problem: Gahui and Soongsil University station
// id: 27880
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        string s;
        int t;
        cin >> s >> t;
        if (s == "Es")
            ans += t * 21;
        else
            ans += t * 17;
    }
    cout << ans;

    return 0;
}