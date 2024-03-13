#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v, a;
int vist[10005];

void printing(int num, int cnt)
{
    if (cnt == m)
    {
        for (auto i : a)
            cout << i << ' ';
        cout << '\n';
        return;
    }
    int temp = 0;
    for (int j = num; j < n; j++)
    {
        if (v[j] != temp)
        {
            a[cnt] = v[j];
            temp = a[cnt];
            printing(j, cnt + 1);
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < m; i++)
        a.push_back(0);
    sort(v.begin(), v.end());
    printing(0, 0);

    return 0;
}