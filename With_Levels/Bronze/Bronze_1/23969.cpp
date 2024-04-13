// problem: 알고리즘 수업 - 버블 정렬 2
// id: 23969
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, k, t;
vector<int> v;
void fn()
{
    for (int l = n - 1; l > 0; l--)
    {
        for (int i = 0; i < l; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                k--;
                if (k == 0)
                {
                    for (auto j : v)
                        cout << j << ' ';
                    return;
                }
            }
        }
    }
    cout << -1;
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    fn();

    return 0;
}