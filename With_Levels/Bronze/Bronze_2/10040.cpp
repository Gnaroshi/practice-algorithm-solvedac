// problem: 투표
// id: 10040
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), cnt(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    fill(cnt.begin(), cnt.end(), 0);
    for (auto i : b)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= a[j])
            {
                cnt[j]++;
                break;
            }
        }
    }
    cout << max_element(cnt.begin(), cnt.end()) - cnt.begin() + 1;

    return 0;
}