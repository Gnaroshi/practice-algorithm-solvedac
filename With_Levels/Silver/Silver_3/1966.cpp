#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        queue<pair<int, int>> Q;
        vector<int> V_prior(n);
        vector<pair<int, int>> V(n);

        // first: priority
        // second: location
        for (int i = 0; i < n; i++)
        {
            cin >> V[i].first;
            V[i].second = i;
            Q.push({V[i].first, V[i].second});
            V_prior[i] = V[i].first;
        }
        int wp_prior = V[m].first;
        int wp_loc = V[m].second;
        sort(V_prior.begin(), V_prior.end(), compare);

        int iter = 0;
        for (int i = 0; i < n; i++)
        {
            if (V[i].first > wp_prior)
            {
                iter++;
            }
        }

        int cnt = 0;
        int pri_cnt = 0;
        while (true)
        {

            auto cur = Q.front();
            if (cur.first == 0 && cur.second == 0)
                break;

            if (iter != 0)
            {
                if (cur.first >= V_prior[pri_cnt])
                {
                    Q.pop();
                    iter--;
                    pri_cnt++;
                }
                else
                {
                    Q.push(cur);
                    Q.pop();
                }
            }
            else
            {
                if (cur.second == wp_loc)
                {
                    pri_cnt++;
                    cout << pri_cnt << '\n';
                    break;
                }
                else if (cur.first == wp_prior)
                {
                    pri_cnt++;
                    Q.pop();
                }
                else
                {
                    Q.push(cur);
                    Q.pop();
                }
            }
        }
    }

    return 0;
}