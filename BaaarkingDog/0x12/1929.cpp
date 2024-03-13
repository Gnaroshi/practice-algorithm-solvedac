#include <bits/stdc++.h>
using namespace std;

void prime_nums(int m, int n)
{
    vector<int> primes;
    vector<bool> prime_states(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (!prime_states[i])
            continue;
        for (int j = i * i; j <= n; j += i)
            prime_states[j] = false;
    }

    if (m == 1)
        m++;

    for (int i = m; i <= n; i++)
    {
        if (prime_states[i])
            cout << i << '\n';
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> m >> n;

    prime_nums(m, n);

    return 0;
}