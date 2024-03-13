// problem: Extreme Sort
// id: 10855
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a;
    cin >> n;
    vector<int> v1(n), v2;
    for (auto &i : v1)
        cin >> i;
    v2.resize(v1.size());
    copy(v1.begin(), v1.end(), v2.begin());
    sort(v1.begin(), v1.end());
    for (int i = 0; i < n; i++)
    {
        if (v1[i] != v2[i])
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";

    return 0;
}