// problem: Art
// id: 15449
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    vector<int> v(5);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 4; j++)
            for (int k = j + 1; k < 5; k++)
                if (v[k] < v[j] + v[i])
                    ans++;
    cout << ans;

    return 0;
}