#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> V;

    int temp = n;
    while (temp--)
    {
        int a, b;
        cin >> a >> b;
        V.push_back({b, a});
    }

    sort(V.begin(), V.end());

    for (int i = 0; i < n; i++)
    {
        cout << V[i].second << " " << V[i].first << '\n';
    }

    return 0;
}