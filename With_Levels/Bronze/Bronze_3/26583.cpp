// problem: Scale
// id: 26583
// time taken:
// string 나누기: stringstream
// string을 integer로: atoi
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (!cin.eof())
    {
        string l, t;
        getline(cin, l);
        stringstream ss(l);
        int iter, loc = 0;
        vector<int> v;
        while (getline(ss, t, ' '))
        {
            int a = atoi(t.c_str());
            v.push_back(a);
        }
        iter = v.size();
        if (iter == 1)
            cout << v[0];
        else
        {
            for (auto i : v)
            {
                if (loc == 0)
                    cout << i * v[loc + 1];
                else if (loc == iter - 1)
                    cout << i * v[loc - 1];
                else
                    cout << i * v[loc - 1] * v[loc + 1];
                cout << ' ';
                loc++;
            }
        }
        cout << '\n';
    }

    return 0;
}