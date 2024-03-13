// problem: Train Passengers
// id: 10269
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, n, cur = 0, nxt;
    cin >> c >> n;
    vector<int> l(n), e(n), s(n);
    for (int i = 0; i < n; i++)
        cin >> l[i] >> e[i] >> s[i];
    bool chk = true;
    if (l[0] == 0 && (e[0] == c || (e[0] < c && s[0] == 0)))
    {
        cur = e[0];
        for (int i = 1; i < n - 1; i++)
        {
            nxt = cur + e[i] - l[i];
            if (l[i] > cur || nxt > c || (nxt < c && s[i]))
            {
                chk = false;
                break;
            }
            cur = nxt;
        }
        if (l[n - 1] != cur || e[n - 1] || s[n - 1])
            chk = false;
    }
    else
        chk = false;
    if (!chk)
        cout << "im";
    cout << "possible";

    return 0;
}