#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            cout << '\n'
                 << "since " << i << "\n";
            return 0;
        }
    return 1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "input number: ";
    cin >> n;
    while (n != 0)
    {
        cout << is_prime(n) << '\n';
        cout << "input number: ";
        cin >> n;
    }

    return 0;
}