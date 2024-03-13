// problem: Currency Exchange
// id: 7361
// time taken:
#include <bits/stdc++.h>
using namespace std;

double rt[5][5];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> rt[i][j];
    }
    cout << fixed;
    cout.precision(2);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        double ans;
        int bef = 0;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
            i--;
        }
        cin >> ans;
        for (auto i : v)
        {
            ans *= rt[bef][i];
            ans = round(ans * 100) / 100;
            bef = i;
        }
        ans *= rt[bef][0];
        ans = round(ans * 100) / 100;
        cout << ans << '\n';
    }

    return 0;
}