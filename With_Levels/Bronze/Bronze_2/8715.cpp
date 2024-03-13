// problem: Permutacja
// id: 8715
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        if (v[i - 1] != i)
        {
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK";

    return 0;
}