// problem: Knot Knowledge
// id: 23275
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    set<int> ks;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ks.insert(t);
    }
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        ks.erase(t);
    }
    cout << *ks.begin();

    return 0;
}