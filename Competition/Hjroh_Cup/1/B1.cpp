// problem: 1차원 2048
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll bins[70];
ll cnts[70];
ll ans = 1;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll bin = 1;
    for (int i = 0; i < 63; i++)
    {
        bins[i] = bin;
        bin *= 2;
    }

    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        for (int j = 0; j < 63; j++)
        {
            if (bins[j] == temp)
            {
                cnts[j]++;
                break;
            }
        }
    }

    for (int i = 0; i < 63; i++)
    {
        if (cnts[i] <= 1)
            continue;
        else
        {
            cnts[i] -= 2;
            cnts[i + 1]++;
            i--;
        }
    }
    for (int i = 63; i >= 0; i--)
    {
        if (cnts[i] != 0)
        {
            cout << bins[i];
            break;
        }
    }

    return 0;
}