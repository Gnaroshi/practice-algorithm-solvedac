#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[100005];
int mn = INT_MAX;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int iter = n;
    int st, en;
    st = en = 0;
    while (en < n)
    {
        if (st == en)
            en++;
        if (arr[en] - arr[st] > m)
        {
            mn = min(mn, arr[en] - arr[st]);
            st++;
        }
        else
            en++;
    }
    cout << mn << '\n';
    return 0;
}