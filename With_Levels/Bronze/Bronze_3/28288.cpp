// problem: Special Event
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int DAY = 5;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt[DAY] = {0};
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < DAY; j++)
        {
            if (s[j] == 'Y')
                cnt[j]++;
        }
    }
    int mx = -1;
    vector<int> loc;
    bool dup = false;
    for (int i = 0; i < DAY; i++)
    {
        if (mx < cnt[i])
            mx = cnt[i];
        else if (mx == cnt[i])
            dup = true;
    }
    if (dup)
    {
        for (int i = 0; i < DAY; i++)
        {
            if (cnt[i] == mx)
                loc.emplace_back(i + 1);
        }
        for (int i = 0; i < loc.size(); i++)
        {
            cout << loc[i] << ((i < loc.size() - 1) ? "," : "");
        }
    }
    else
    {
        for (int i = 0; i < DAY; i++)
        {
            if (cnt[i] == mx)
            {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}