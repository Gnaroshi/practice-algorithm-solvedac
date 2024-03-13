#include <bits/stdc++.h>
using namespace std;

int cri[200005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> cri[i];

    int start = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (cri[i] - cri[i + 1] == 1)
            start = i + 1;
        else
            break;
    }

    return 0;
}