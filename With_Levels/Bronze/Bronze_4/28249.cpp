// problem: Chili Peppers
// id: 28249
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> pn = {"Poblano", "Mirasol", "Serrano", "Cayenne", "Thai", "Habanero"};
ll shu[6] = {1500, 6000, 15500, 40000, 75000, 125000};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ans += shu[distance(pn.begin(), find(pn.begin(), pn.end(), s))];
    }
    cout << ans;

    return 0;
}
