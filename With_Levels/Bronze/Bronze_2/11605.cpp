// problem: Magic Trick
// id: 11605
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, ans = 0;
    cin >> n;
    string s;
    vector<int> it;
    vector<string> op;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> t;
        it.emplace_back(t);
        op.emplace_back(s);
    }
    for (int i = 1; i <= 100; i++)
    {
        bool chk = true;
        t = i;
        for (int j = 0; j < n; j++)
        {
            if (op[j][0] == 'S')
            {
                if (t - it[j] < 0)
                {
                    chk = false;
                    break;
                }
                else
                    t -= it[j];
            }
            else if (op[j][0] == 'D')
            {
                if (t % it[j] != 0)
                {
                    chk = false;
                    break;
                }
                else
                    t /= it[j];
            }
            else if (op[j][0] == 'A')
                t += it[j];
            else
                t *= it[j];
        }
        ans += !chk;
    }
    cout << ans;

    return 0;
}