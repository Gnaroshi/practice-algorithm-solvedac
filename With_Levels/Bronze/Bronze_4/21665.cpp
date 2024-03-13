// problem: Миша и негатив
// id: 21665
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    string temp;
    int ans = 0;
    char **bo = (char **)malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
        bo[i] = (char *)malloc(sizeof(char) * m);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        for (int j = 0; j < m; j++)
            bo[i][j] = temp[j];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        for (int j = 0; j < m; j++)
        {
            if (bo[i][j] == temp[j])
                ans++;
        }
    }
    cout << ans;

    return 0;
}