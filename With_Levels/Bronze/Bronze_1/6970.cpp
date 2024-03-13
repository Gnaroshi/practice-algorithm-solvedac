// problem: Sentences
// id: 6970
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ns, nv, no;
    cin >> n;
    while (n--)
    {
        cin >> ns >> nv >> no;
        vector<string> s, v, o;
        string t;
        cin.ignore();
        for (int i = 0; i < ns; i++)
        {
            getline(cin, t);
            s.emplace_back(t);
        }

        for (int i = 0; i < nv; i++)
        {
            getline(cin, t);
            v.emplace_back(t);
        }

        for (int i = 0; i < no; i++)
        {
            getline(cin, t);
            o.emplace_back(t);
        }

        for (auto i : s)
            for (auto j : v)
                for (auto k : o)
                    cout << i << ' ' << j << ' ' << k << ".\n";

        cout << '\n';
    }
    return 0;
}