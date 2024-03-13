// problem: This Problem’s a Slam Dunk
// id: 17851
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(5), b(5);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > b[i])
            ans++;
    }
    cout << ans;

    return 0;
}