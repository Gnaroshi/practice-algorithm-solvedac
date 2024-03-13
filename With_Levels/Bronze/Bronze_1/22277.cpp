// problem: Non-Integer Donuts
// id: 22277
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(string s)
{
    int ret = 0;
    string t = "";
    for (auto i : s)
    {
        if (isdigit(i))
            t += i;
    }
    return stoi(t);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cur, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    cur = fn(s);
    while (n--)
    {
        cin >> s;
        cur += fn(s);
        if (cur % 100)
            ans++;
    }
    cout << ans;
    return 0;
}