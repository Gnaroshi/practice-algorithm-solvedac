// problem: 트로피 진열
// id: 1668
// time taken:
#include <bits/stdc++.h>
using namespace std;

int solv(int *tro, int n)
{
    int mx = -1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (tro[i] > mx)
        {
            cnt++;
            mx = tro[i];
        }
    }
    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *tro = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> tro[i];
    cout << solv(tro, n) << '\n';
    reverse(tro, tro + n);
    cout << solv(tro, n) << '\n';

    return 0;
}