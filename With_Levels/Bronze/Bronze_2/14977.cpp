// problem: Amusement Anticipation
// id: 14977
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        vector<int> x(n);
        for (auto &i : x)
            cin >> i;
        if (n <= 2)
        {
            cout << 1 << '\n';
            continue;
        }
        reverse(x.begin(), x.end());
        int d = x[1] - x[0];
        bool chk = true;
        for (int i = 1; i < n; i++)
        {
            if (x[i] - x[i - 1] != d)
            {
                cout << n - i + 1 << '\n';
                chk = false;
                break;
            }
        }
        if (chk)
            cout << 1 << '\n';
    }

    return 0;
}