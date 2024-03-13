// problem: Yacht Dice
// id: 27162
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int t, mx = 0;
    int cur = 1;
    int chk[7] = {0};
    for (int i = 0; i < 3; i++)
    {
        cin >> t;
        chk[t]++;
    }
    if (s[0] == 'Y')
        mx = max(mx, chk[1] + 2);
    // cout << cur++ << ' ' << mx << '\n';
    if (s[1] == 'Y')
        mx = max(mx, (chk[2] + 2) * 2);
    // cout << cur++ << ' ' << mx << '\n';
    if (s[2] == 'Y')
        mx = max(mx, (chk[3] + 2) * 3);
    // cout << cur++ << ' ' << mx << '\n';
    if (s[3] == 'Y')
        mx = max(mx, (chk[4] + 2) * 4);
    // cout << cur++ << ' ' << mx << '\n';
    if (s[4] == 'Y')
        mx = max(mx, (chk[5] + 2) * 5);
    // cout << cur++ << ' ' << mx << '\n';
    if (s[5] == 'Y')
        mx = max(mx, (chk[6] + 2) * 6);
    // cout << cur++ << ' ' << mx << '\n';
    if (s[6] == 'Y')
    {
        for (int i = 1; i <= 6; i++)
        {
            if (chk[i] >= 2)
                mx = max(mx, 4 * i);
        }
        // cout << cur++ << ' ' << mx << '\n';
    }
    if (s[7] == 'Y')
    {
        vector<int> v;
        for (int i = 1; i <= 6; i++)
        {
            if (chk[i])
                v.push_back(i);
        }
        if (v.size() <= 2)
        {
            if (chk[v[0]] == 3)
            {
                for (int i = 1; i <= 6; i++)
                {
                    if (i != v[0])
                        mx = max(mx, v[0] * 3 + i * 2);
                }
            }
            else
                mx = max(mx, v[0] * 2 + v[1] * 3);
        }
        // cout << cur++ << ' ' << mx << '\n';
    }
    if (s[8] == 'Y')
    {
        if (!chk[6])
        {
            bool lsc = true;
            for (int i = 1; i <= 5; i++)
            {
                if (chk[i] > 1)
                {
                    lsc = false;
                    break;
                }
            }
            if (lsc)
                mx = max(mx, 30);
        }
        // cout << cur++ << ' ' << mx << '\n';
    }
    if (s[9] == 'Y')
    {
        if (!chk[1])
        {
            bool lsc = true;
            for (int i = 2; i <= 6; i++)
            {
                if (chk[i] > 1)
                {
                    lsc = false;
                    break;
                }
            }
            if (lsc)
                mx = max(mx, 30);
        }
        // cout << cur++ << ' ' << mx << '\n';
    }
    if (s[10] == 'Y')
    {
        for (int i = 1; i <= 6; i++)
        {
            if (chk[i] == 3)
            {
                mx = max(mx, 50);
                break;
            }
        }
        // cout << cur++ << ' ' << mx << '\n';
    }
    if (s[11] == 'Y')
    {
        t = 0;
        for (int i = 1; i <= 6; i++)
        {
            if (chk[i])
                t += i * chk[i];
        }
        mx = max(mx, t + 12);
        // cout << cur++ << ' ' << mx << '\n';
    }
    cout << mx;

    return 0;
}