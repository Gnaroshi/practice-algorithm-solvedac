// problem: 싸이클
// id: 2526
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, o, p, cnt = 0;
    vector<int> v;
    cin >> o >> p;
    n = o;
    while (true)
    {
        auto loc = find(v.begin(), v.end(), n);
        if (loc != v.end())
        {
            cout << v.end() - loc;
            return 0;
        }
        v.emplace_back(n);
        n = ((n % p) * (o % p)) % p;
    }

    return 0;
}