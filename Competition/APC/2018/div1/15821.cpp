#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<long long> mx_fish;
    for (int i = 0; i < n; i++)
    {
        int pi;
        cin >> pi;
        int mx_x, mx_y;
        long long tx, ty;
        long long mx_dis = -1;
        for (int j = 0; j < pi; j++)
        {
            cin >> tx >> ty;
            mx_dis = max(mx_dis, (tx * tx + ty * ty));
        }
        mx_fish.push_back(mx_dis);
    }
    sort(mx_fish.begin(), mx_fish.end());
    // cout << "-------------\n";
    // for (auto x : mx_fish)
    // {
    //     cout << x << '\n';
    // }

    cout << mx_fish[k - 1] << ".00 " << '\n';
    return 0;
}