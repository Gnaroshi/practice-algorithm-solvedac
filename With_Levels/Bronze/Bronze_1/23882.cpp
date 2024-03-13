// problem: 알고리즘 수업 - 선택 정렬 2
// id: 23882
// time taken:
#include <bits/stdc++.h>
using namespace std;

int n, k, ans, t;
vector<int> v;

void fn()
{
    for (int i = n - 1; i >= 1; i--)
    {
        t = max_element(v.begin(), v.begin() + i + 1) - v.begin();
        if (i != t)
        {
            swap(v[i], v[t]);
            ans++;
        }
        if (ans == k)
        {
            for (auto i : v)
                cout << i << ' ';
            return;
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