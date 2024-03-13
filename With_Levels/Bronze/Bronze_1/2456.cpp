// problem: 나는 학급회장이다
// id: 2456
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ms[3] = {1, 10000, 100000000};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    ll s[3] = {0}, k[3] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> t;
            s[j] += t;
            k[j] += ms[t - 1];
        }
    }
    ll mx = *max_element(s, s + 3);
    int mxc = 0;
    vector<int> mxl;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == mx)
        {
            mxc++;
            mxl.push_back(i);
        }
    }
    if (mxc == 1)
        cout << mxl[0] + 1 << ' ' << s[mxl[0]];
    else
    {
        ll mxk = -1;
        mx = -1, mxc = 0;
        for (auto i : mxl)
            mxk = max(mx, k[i]);

        for (auto i : mxl)
        {
            if (mx < k[i])
            {
                mx = k[i];
                mxc = i;
            }
            else if (mx == k[i] && mx == mxk)
            {
                cout << 0 << ' ' << s[i];
                return 0;
            }
        }
        cout << mxc + 1 << ' ' << s[mxc];
    }

    return 0;
}