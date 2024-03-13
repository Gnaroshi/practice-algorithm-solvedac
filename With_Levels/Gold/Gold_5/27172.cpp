// problem: 수 나누기 게임
// id: 27172
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 1000005;

bool chk[MX];
int ans[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        chk[i] = 1;
    }
    for (auto i : v)
    {
        for (int j = i + i; j < MX; j += i)
        {
            if (chk[j])
                ans[i]++, ans[j]--;
        }
    }
    for (auto i : v)
        cout << ans[i] << ' ';

    return 0;
}