// problem: Automated Telephone Exchange
// id: 3507
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i + j > n)
                break;
            if (i + j == n)
                ans++;
        }
    }
    cout << ans;

    return 0;
}