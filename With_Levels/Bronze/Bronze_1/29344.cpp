// problem: Спичрайтер Йоды
// id: 29344
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    vector<string> v;
    while (cin >> s)
    {
        if (s.back() != '.')
            v.emplace_back(s);
        else
        {
            cout << s.substr(0, s.length() - 1);
            int iter = v.size();
            if (!v.empty())
            {
                cout << ' ';
                for (int i = iter - 1; i >= 0; i--)
                {
                    cout << v[i];
                    if (i != 0)
                        cout << ' ';
                }
            }
            cout << ". ";
            v.clear();
            v.resize(0);
        }
    }

    return 0;
}