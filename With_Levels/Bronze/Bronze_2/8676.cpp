// problem: Figury
// id: 8676
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
    for (int i = 2; i < n; i++)
    {
        if (v[i] != v[i - 1] && v[i] != v[i - 2] && v[i - 1] != v[i - 2])
        {
            cout << "TAK";
            return 0;
        }
    }
    cout << "NIE";

    return 0;
}