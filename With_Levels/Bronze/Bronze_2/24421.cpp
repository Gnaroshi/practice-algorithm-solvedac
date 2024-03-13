// problem: 掛け算 (Multiplication)
// id: 24421
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    int *ns = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> ns[i];
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (ns[i] * ns[j] == ns[k])
                    cnt++;
    cout << cnt;

    return 0;
}