#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int temp_n = n - 1;

    int coins[11];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int cnt = 0;
    while (k > 0)
    {
        if (k - coins[temp_n] >= 0)
        {
            cnt++;
            k -= coins[temp_n];
        }
        else
            temp_n--;
    }

    cout << cnt << '\n';
    return 0;
}
