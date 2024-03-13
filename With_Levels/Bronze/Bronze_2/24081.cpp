// problem: 箱と鍵 (Boxes and Keys)
// id: 24081
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, ans, t;
    cin >> n >> m;
    vector<int> a(n);
    set<int> b;

    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        b.insert(t);
    }
    t = 0;
    for (auto i : a)
    {
        if (b.find(i) != b.end())
            t++;
    }
    cout << t;

    return 0;
}