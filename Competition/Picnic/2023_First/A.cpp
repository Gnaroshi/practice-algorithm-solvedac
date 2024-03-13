// problem: A번 - 진주로 가자! (Easy)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0, jj;
    cin >> n;
    vector<pair<int, string>> v(n);
    bool chk = true;
    for (auto &i : v)
    {
        cin >> i.second >> i.first;
        if (chk && i.second == "jinju")
        {
            chk = false, jj = i.first;
        }
    }
    sort(v.begin(), v.end(), [&](pair<int, string> a, pair<int, string> b)
         { return a.first > b.first; });
    for (auto i : v)
    {
        if (i.first == jj)
            break;
        cnt++;
    }
    cout << jj << '\n'
         << cnt << '\n';

    return 0;
}