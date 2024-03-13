// problem: Черно-белая графика
// id: 21675
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string op;
    int w, h;
    cin >> h >> w;
    int **a = (int **)malloc(sizeof(int *) * w);
    for (int i = 0; i < w; i++)
        a[i] = (int *)malloc(sizeof(int) * h);
    int **b = (int **)malloc(sizeof(int *) * w);
    for (int i = 0; i < w; i++)
        b[i] = (int *)malloc(sizeof(int) * h);
    for (int i = 0; i < w; i++)
    {
        string t;
        cin >> t;
        for (int j = 0; j < h; j++)
            a[i][j] = t[j] - '0';
    }
    for (int i = 0; i < w; i++)
    {
        string t;
        cin >> t;
        for (int j = 0; j < h; j++)
            b[i][j] = t[j] - '0';
    }
    cin >> op;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (!a[i][j] && !b[i][j])
                cout << op[0];
            else if (a[i][j] && b[i][j])
                cout << op[3];
            else
            {
                if (b[i][j])
                    cout << op[1];
                else
                    cout << op[2];
            }
        }
        cout << '\n';
    }

    return 0;
}