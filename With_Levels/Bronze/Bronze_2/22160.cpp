// problem: Параллелепипед
// id: 22160
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        ll temp = 0;
        vector<ll> v(12);
        for (auto &i : v)
        {
            cin >> i;
            temp += i;
        }
        if (temp == 0)
            break;
        sort(v.begin(), v.end());
        bool chk = true;
        ll c;
        for (int i = 0; i < 3; i++)
        {
            c = v[i * 4];
            for (int j = i * 4 + 1; j < i * 4 + 4; j++)
            {
                if (c != v[j])
                {
                    chk = false;
                    break;
                }
            }
            if (!chk)
                break;
        }
        cout << (chk ? "yes\n" : "no\n");
    }

    return 0;
}