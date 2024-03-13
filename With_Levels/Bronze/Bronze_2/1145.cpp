#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n[5];
    ll mn = 101;
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
        if (n[i] < mn)
            mn = n[i];
    }

    while (true)
    {
        int cnt = 0;
        for (int i = 0; i < 5; i++)
        {
            if (mn % n[i] == 0)
                cnt++;
            if (cnt == 3)
                break;
        }
        if (cnt == 3)
            break;
        mn++;
    }

    cout << mn << '\n';

    return 0;
}