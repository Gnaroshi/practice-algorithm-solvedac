#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            sum = (sum + temp) % n;
        }
        if (sum % n == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}