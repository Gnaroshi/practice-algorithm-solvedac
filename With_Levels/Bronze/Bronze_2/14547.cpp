// problem: X X glued
// id: 14547
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, c;
    while (true)
    {
        cin >> a;
        if (a == "#")
            break;
        cin >> b >> c;
        int cnt[10] = {0};
        char bef = b[0];
        for (int i = 1; i < 4; i++)
        {
            if (bef == b[i])
                cnt[b[i] - '0'] = 1;
            bef = b[i];
        }
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            if (cnt[i])
                v.emplace_back(i);
        }
        int iter = v.size();
        if (iter > 1)
        {
            for (int i = 0; i < iter; i++)
            {
                cout << v[i] << ' ' << v[i] << " glued";
                if (i != iter - 1)
                    cout << " and ";
            }
            cout << '\n';
        }
        else if (iter == 1)
        {
            cout << v[0] << ' ' << v[0] << " glued";
            cout << '\n';
        }
    }

    return 0;
}