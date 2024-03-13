// problem: CARDS
// id: 3280
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n, d, c;
string s;
vector<int> v;

void fn()
{
    vector<int> t;
    for (int i = 0; i < n; i += 3)
        t.push_back(v[i]);
    for (int i = 1; i < n; i += 3)
        t.push_back(v[i]);
    for (int i = 2; i < n; i += 3)
        t.push_back(v[i]);
    copy(t.begin(), t.end(), v.begin());
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> d;
    bool *chk = new bool[n + 1];
    fill(chk, chk + n + 1, true);
    v.resize(n);
    iota(v.begin(), v.end(), 1);

    while (d--)
    {
        cin >> s;
        if (s[0] == 'f')
            c = 0;
        else if (s[0] == 's')
            c = 1;
        else
            c = 2;
        for (int i = 0; i < n; i++)
        {
            if (i % 3 != c)
                chk[v[i]] = false;
        }
        fn();
    }
    for (int i = 1; i <= n; i++)
    {
        if (chk[i])
            cout << i << ' ';
    }
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // 10 11 12

    // 3 6 9 12

    // 1 4 7
    // 10 2 5
    // 8 11 3
    // 6 9 12

    // 6

    return 0;
}