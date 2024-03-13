// problem: Külmkapimagnetid
// id: 29966
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter, crr;
    string s;
    cin >> n >> s;
    sort(s.begin(), s.end());
    iter = s.length();
    vector<int> a, b, ans;
    for (int i = 0; i < iter; i++)
    {
        if (i % 2)
            a.push_back(s[i] - '0');
        else
            b.push_back(s[i] - '0');
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (b.size() > a.size())
        a.push_back(0);

    crr = 0;
    iter = a.size();
    for (int i = 0; i < iter; i++)
    {
        int t = a[i] + b[i] + crr;
        ans.push_back(t % 10);
        crr = t / 10;
    }
    if (crr)
        ans.push_back(crr);
    reverse(ans.begin(), ans.end());
    bool chk = false;
    for (auto i : ans)
    {
        if (i)
            chk = true;
        if (chk)
            cout << i;
    }
    if (!chk)
        cout << 0;

    return 0;
}