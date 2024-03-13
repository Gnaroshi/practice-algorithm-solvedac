// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, p;
    cin >> n >> b >> p;
    int *c = (int *)malloc(sizeof(int) * n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({0, i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        v[i].first = c[i];
    }
    sort(v.begin(), v.end());

    return 0;
}