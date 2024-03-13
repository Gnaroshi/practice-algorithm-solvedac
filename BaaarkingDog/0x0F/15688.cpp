#include <bits/stdc++.h>
using namespace std;

#define MX 2000001

int n;
int arr[MX];
int countings[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            countings[-1 * arr[i] + 1000000]++;
        else
            countings[arr[i]]++;
    }

    int iter = 1000000;

    for (int i = MX; i > iter; i--)
    {
        for (int j = 0; j < countings[i]; j++)
        {
            cout << -1 * i + 1000000 << '\n';
        }
    }

    for (int i = 0; i <= iter; i++)
    {
        for (int j = 0; j < countings[i]; j++)
        {
            cout << i << '\n';
        }
    }

    return 0;
}