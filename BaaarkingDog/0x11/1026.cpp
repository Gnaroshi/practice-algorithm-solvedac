#include <bits/stdc++.h>
using namespace std;

int n;
int arra[52];
int arrb[52];

bool cmp(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arra[i];
    for (int i = 0; i < n; i++)
        cin >> arrb[i];

    sort(arra, arra + n);
    sort(arrb, arrb + n, cmp);

    long long s = 0;
    for (int i = 0; i < n; i++)
        s += arra[i] * arrb[i];
    cout << s << '\n';

    return 0;
}