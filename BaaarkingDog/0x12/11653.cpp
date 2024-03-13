#include <bits/stdc++.h>
using namespace std;

// #define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    int iter = num;
    for (int i = 2; i * i <= iter; i++)
    {
        while (num % i == 0)
        {
            cout << i << '\n';
            num /= i;
        }
    }

    if (num != 1)
        cout << num;
    return 0;
}