// problem: The Cow-Signal
// id: 14175
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    string s;
    cin >> n >> m >> k;
    char **b = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        b[i] = (char *)malloc(sizeof(char) * m);

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
            b[i][j] = s[j];
    }

    int ia = n * k, ib = m * k;
    for (int i = 0; i < ia; i++)
    {
        for (int j = 0; j < ib; j++)
            cout << b[i / k][j / k];
        cout << '\n';
    }

    return 0;
}