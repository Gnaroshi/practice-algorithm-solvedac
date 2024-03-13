// problem: Outfits
// id: 7601
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d, sc = 1, be, ca;
    while (true)
    {
        cin >> n >> d;
        if (n + d == 0)
            break;
        cout << "Scenario " << sc++ << '\n';
        vector<int> bec, cas;
        for (int i = 1; i <= n; i++)
        {
            bec.emplace_back(i);
            cas.emplace_back(i);
        }
        reverse(cas.begin(), cas.end());
        cin >> be >> ca;
        if (be != 0)
            bec.erase(bec.begin() + be - 1);
        if (ca != 0)
            cas.erase(cas.begin() + ca - 1);
        for (int i = 0; i < d; i++)
        {
            cin >> be >> ca;
            cout << "Day " << i + 1;
            if (bec[be - 1] == cas[ca - 1])
                cout
                    << " ALERT\n";
            else
                cout << " OK\n";
        }
    }
    return 0;
}