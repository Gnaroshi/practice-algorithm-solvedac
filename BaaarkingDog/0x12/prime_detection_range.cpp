#include <bits/stdc++.h>
using namespace std;

vector<int> prime_list(int n)
{
    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = 1;
        for (int p : primes)
        {
            if (p * p > i)
                break;
            if (i % p == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            primes.push_back(i);
    }
    return primes;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}