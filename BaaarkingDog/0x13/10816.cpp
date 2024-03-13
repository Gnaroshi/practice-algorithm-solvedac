#include <bits/stdc++.h>
using namespace std;

#define MX 1000002

int n, m;
int numsA[MX];
int numsB[MX];

int left(int tar, int len)
{
    int s, e;
    s = 0;
    e = len;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (numsA[mid] >= tar)
            e = mid;
        else
            s = mid + 1;
    }
    return s;
}

int right(int tar, int len)
{
    int s, e;
    s = 0;
    e = len;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (numsA[mid] > tar)
            e = mid;
        else
            s = mid + 1;
    }
    return s;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> numsA[i];
    sort(numsA, numsA + n);
    cin >> m;
    while (m--)
    {
        int temp;
        cin >> temp;
        cout << right(temp, n) - left(temp, n) << ' ';
    }

    return 0;
}