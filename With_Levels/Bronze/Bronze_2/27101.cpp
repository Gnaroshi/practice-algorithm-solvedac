// problem: Metric Matrices
// id: 27101
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int **m = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        m[i] = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i][i] != 0)
        {
            cout << 1;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (m[i][j] <= 0)
                {
                    cout << 2;
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m[i][j] != m[j][i])
            {
                cout << 3;
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (m[i][j] + m[j][k] < m[i][k])
                {
                    cout << 4;
                    return 0;
                }
            }
        }
    }
    cout << 0;

    return 0;
}