// problem: solved.ac
// id: 18110
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, d, iter;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    d = round(double(n) * 0.15);
    double m = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    iter = v.size() - d;
    for (int i = d; i < iter; i++)
        m += v[i];
    cout << round(m / (n - 2 * d));

    return 0;
}