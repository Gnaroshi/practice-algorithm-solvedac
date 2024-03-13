// problem: Six Sides
// id: 13987
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(5);

    double n = 0, m = 0;
    vector<double> a(6), b(6);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    for (auto i : a)
    {
        for (auto j : b)
        {
            if (i != j)
            {
                if (i > j)
                    n++;
                m++;
            }
        }
    }
    cout << n / m;

    return 0;
}