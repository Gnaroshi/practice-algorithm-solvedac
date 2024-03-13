// problem: 지영 공주님의 마법 거울
// id: 11586
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n;
    char **b = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        b[i] = (char *)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
            b[i][j] = s[j];
    }
    cin >> k;
    if (k == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << b[i][j];
            cout << '\n';
        }
    }
    else if (k == 2)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
                cout << b[i][j];
            cout << '\n';
        }
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
                cout << b[i][j];
            cout << '\n';
        }
    }

    return 0;
}