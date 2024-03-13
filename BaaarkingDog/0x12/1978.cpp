#include <bits/stdc++.h>
using namespace std;

int ans = 0;

bool is_prime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (is_prime(temp))
            ans++;
    }

    cout << ans << '\n';

    return 0;
}