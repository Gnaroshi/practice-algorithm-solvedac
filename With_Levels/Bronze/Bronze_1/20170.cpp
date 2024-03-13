// problem: Commemorative Dice
// id: 20170
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(6), b(6);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (a[i] > b[j])
                cnt++;
        }
    }

    cout << cnt / __gcd(cnt, 36) << '/' << 36 / __gcd(cnt, 36);

    return 0;
}