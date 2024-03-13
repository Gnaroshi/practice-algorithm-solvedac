// problem: Fitness
// id: 15180
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cur;
    string s;
    cin >> cur;
    int cnt[9] = {0};
    vector<int> ans;
    ans.push_back(cur);
    cnt[cur] = 1;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        if (s[0] == 'A')
        {
            cur -= s[1] - '0';
            if (cur < 1)
                cur += 8;
        }
        else
        {
            cur += s[1] - '0';
            if (cur > 8)
                cur -= 8;
        }
        cnt[cur]++;
        ans.push_back(cur);
    }

    int iter = ans.size();
    for (int i = 0; i < iter; i++)
    {
        cout << ans[i];
        if (i < iter - 1)
            cout << ' ';
    }

    bool chk = true;
    for (int i = 1; i <= 8; i++)
    {
        if (cnt[i] > 1)
            chk = false;
    }
    if (!chk)
        cout << " reject";
    else
    {
        int scnt = 0;
        for (int i = 1; i <= 8; i++)
        {
            if (cnt[i] == 1)
                scnt++;
        }
        if (scnt < 5)
            cout << " reject";
    }

    return 0;
}