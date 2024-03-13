#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n)
{
    vector<int> primes;
    vector<bool> state(n + 1, true);
    state[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (!state[i])
            continue;
        for (int j = i * i; j <= n; j += i)
            state[j] = false;
    }

    for (int i = 2; i <= n; i++)
    {
        if (state[i])
            primes.push_back(i);
    }

    return primes;
}

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;
    cin >> n;
    sieve(n);
    vector<int> ans;
    ans = sieve(n);

    int cnt = 0;
    for (auto i : ans)
    {
        cout << i << ' ';
        cnt++;
        if (cnt == 10)
        {
            cnt = 0;
            cout << '\n';
        }
    }

    return 0;
}