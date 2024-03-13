// problem: B번 - Potato
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s = 0, ts = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        s += i;
    }
    sort(v.begin(), v.end());
    int iter = n / 2;
    for (int i = 0; i < iter; i++)
        ts += v[i];
    cout << ts << ' ' << s - ts;

    return 0;
}