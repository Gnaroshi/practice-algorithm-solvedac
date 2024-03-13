// problem: Cube Bits
// id: 15612
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (!n)
        {
            cout << 0 << '\n';
            continue;
        }
        vector<int> v;
        while (n > 0)
        {
            v.emplace_back(n % 3);
            n /= 3;
        }
        reverse(v.begin(), v.end());
        bool chk = true;
        for (auto i : v)
        {
            if (i != 0)
                chk = false;
            if (!chk)
                cout << i;
        }
        cout << '\n';
    }

    return 0;
}