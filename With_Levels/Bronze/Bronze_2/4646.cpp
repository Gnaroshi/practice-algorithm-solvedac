// problem: Magnificent Meatballs
// id: 4646
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        int p, t, s = 0;
        vector<int> v;
        v.emplace_back(0);
        for (int i = 1; i <= n; i++)
        {
            cin >> t;
            s += t;
            v.emplace_back(v[i - 1] + t);
        }
        bool chk = false;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == s - v[i])
            {
                chk = true;
                cout << "Sam stops at position " << i << " and Ella stops at position " << i + 1 << ".\n";
            }
        }
        if (!chk)
            cout << "No equal partitioning.\n";
    }

    return 0;
}