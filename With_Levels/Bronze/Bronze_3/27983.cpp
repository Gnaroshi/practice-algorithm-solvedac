// problem: 리본 (Easy)
// id: 27983
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int *x = (int *)malloc(sizeof(int) * n);
    int *l = (int *)malloc(sizeof(int) * n);
    char *c = (char *)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(x[i] - x[j]) <= l[i] + l[j] && c[i] != c[j])
            {
                cout << "YES" << '\n'
                     << i + 1 << ' ' << j + 1;
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}