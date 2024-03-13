// problem: Dividing the Pirate Hoard
// id: 5293
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int r = m % n;
        int t = (m - r) / n;
        int nxt = t * (n - 1);
        m = nxt;
        v.push_back(r + t);
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i < v.size() - 1)
            cout << ' ';
        else
            cout << '\n';
    }
    cout << m;

    return 0;
}