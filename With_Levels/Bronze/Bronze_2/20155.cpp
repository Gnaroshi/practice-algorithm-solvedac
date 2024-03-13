// problem: 우리 집 밑에 편의점이 있는데
// id: 20155
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &i : v)
        i = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v[t - 1]++;
    }
    cout << *max_element(v.begin(), v.end());

    return 0;
}