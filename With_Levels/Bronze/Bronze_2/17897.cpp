// problem: Pea Soup and Pancakes
// id: 17897
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string ans, s, t;
    bool chk = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cin.ignore();
        getline(cin, t);
        bool ps = false;
        bool pc = false;
        for (int j = 0; j < m; j++)
        {
            getline(cin, s);
            if (s == "pea soup")
                ps = true;
            else if (s == "pancakes")
                pc = true;
        }
        if (chk && ps && pc)
        {
            ans = t;
            chk = false;
        }
    }
    if (chk)
        cout << "Anywhere is fine I guess";
    else
        cout << ans;

    return 0;
}