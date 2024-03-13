// problem: He is offside!
// id: 5738
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ma;
    while (true)
    {
        cin >> n >> m;
        if (n + m == 0)
            break;
        vector<int> a(n), b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        ma = *min_element(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (ma < b[1])
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}