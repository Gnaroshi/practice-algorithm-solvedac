// problem: Призы
// id: 20512
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bef;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    bef = v[0];
    v[0] = min(v[0], v[1]);
    for (int i = 1; i < n; i++)
    {
        if (bef >= v[i])
            v[i] = max(v[i], v[i - 1]);
        else
            swap(bef, v[i]);
    }
    for (int i = 1; i < n; i++)
        cout << v[i] << ' ';

    return 0;
}