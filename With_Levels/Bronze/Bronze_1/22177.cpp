// problem: Универсальная розетка
// id: 22177
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double d, a, b, c;
    cin >> n >> d;
    vector<int> x, y, t;
    d *= d;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        x.emplace_back(a);
        y.emplace_back(b);
        t.emplace_back(c);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (abs((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) - d) <= 0.000001 && t[i] != t[j])
            {
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";

    return 0;
}