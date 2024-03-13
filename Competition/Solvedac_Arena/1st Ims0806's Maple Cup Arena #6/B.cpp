// problem: B번 - 에르다 노바와 오리진 스킬
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ca = 0, cb = 0, bef, nxt;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bef = a.front();
    nxt = bef + 100;
    ca++;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= nxt)
        {
            bef = a[i];
            nxt = bef + 100;
            ca++;
        }
    }
    bef = b.front();
    nxt = bef + 360;
    cb++;
    for (int i = 1; i < m; i++)
    {
        if (b[i] >= nxt)
        {
            bef = b[i];
            nxt = bef + 360;
            cb++;
        }
    }
    cout << ca << ' ' << cb;

    return 0;
}