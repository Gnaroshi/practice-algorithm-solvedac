// problem: 외계인의 기타 연주
// id: 2841
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, ans = 0;
    cin >> n >> p;
    vector<stack<int>> v(7);
    while (n--)
    {
        int l, pr;
        cin >> l >> pr;
        if (v[l].empty())
        {
            v[l].push(pr);
            ans++;
        }
        else
        {
            while (v[l].top() > pr)
            {
                v[l].pop();
                ans++;
                if (v[l].empty())
                    break;
            }
            if (v[l].empty())
            {
                v[l].push(pr);
                ans++;
            }
            else
            {
                if (v[l].top() == pr)
                    continue;
                else
                {
                    v[l].push(pr);
                    ans++;
                }
            }
        }
    }
    cout << ans;

    return 0;
}