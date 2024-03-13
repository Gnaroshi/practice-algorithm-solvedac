// problem: Goats
// id: 26534
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a = 0, b = 36;
    vector<int> ga(6), gb(6);
    for (auto &i : ga)
        cin >> i;
    for (auto &i : gb)
        cin >> i;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (ga[i] == gb[j])
                b--;
            if (ga[i] > gb[j])
                a++;
        }
    }
    cout << fixed;
    cout.precision(5);
    if (b == 0)
        cout << 0.0;
    else
        cout << a / b;
    return 0;
}