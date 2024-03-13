// problem: Kagisys
// id: 22477
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<string> ks;
    int n, m;
    string s;
    bool chk = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        ks.insert(s);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (ks.find(s) != ks.end())
        {
            chk = !chk;
            if (chk)
                cout << "Opened by " << s;
            else
                cout << "Closed by " << s;
        }
        else
            cout << "Unknown " << s;
        cout << '\n';
    }

    return 0;
}