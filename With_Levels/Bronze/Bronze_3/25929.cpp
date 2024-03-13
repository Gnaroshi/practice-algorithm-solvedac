#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int v1 = 0;
    int v1e = 0;
    int v2 = 0;
    int v2e = 0;
    for (int i = 0; i < n; i++)
    {
        int e, temp1, temp2;
        cin >> e >> temp1 >> temp2;
        v1 += temp1;
        v2 += temp2;
        if (temp1 > temp2)
            v1e += e;
        else if (temp1 < temp2)
            v2e += e;
    }

    if (v1 > v2 && v1e > v2e)
        cout << 1;
    else if (v1 < v2 && v1e < v2e)
        cout << 2;
    else
        cout << 0;

    return 0;
}