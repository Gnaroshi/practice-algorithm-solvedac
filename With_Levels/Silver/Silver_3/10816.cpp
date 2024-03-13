#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++)
        cin >> V[i];

    sort(V.begin(), V.end());

    int temp;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        auto lbi = lower_bound(V.begin(), V.end(), temp);
        auto ubi = upper_bound(V.begin(), V.end(), temp);
        cout << ubi - lbi << " ";
    }

    return 0;
}