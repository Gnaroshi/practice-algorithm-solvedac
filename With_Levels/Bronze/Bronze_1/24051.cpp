// problem: 알고리즘 수업 - 삽입 정렬 1
// id: 24051
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v(10005);

int is()
{
    for (int i = 2; i <= n; i++)
    {
        int l = i - 1;
        int ni = v[i];

        while (1 <= l && ni < v[l])
        {
            v[l + 1] = v[l];
            l--;
            k--;
            if (!k)
            {
                cout << v[l + 1];
                return 0;
            }
        }
        if (l + 1 != i)
        {
            v[l + 1] = ni;
            k--;
            if (!k)
            {
                cout << v[l + 1];
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    is();

    return 0;
}