// problem: Always Follow the Rules in Zombieland
// id: 4459
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    vector<string> v;
    string s;
    cin.ignore();
    for (int i = 0; i < q; i++)
    {
        getline(cin, s);
        v.push_back(s);
    }
    int r, t;
    cin >> r;
    for (int i = 0; i < r; i++)
    {
        cin >> t;
        cout << "Rule " << t << ": ";
        if (t > 0 && t <= q)
            cout << v[t - 1] << '\n';
        else
            cout << "No such rule\n";
    }

    return 0;
}