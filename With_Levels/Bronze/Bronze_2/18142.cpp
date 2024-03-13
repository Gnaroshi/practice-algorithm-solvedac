// problem: Tapioka
// id: 18142
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    string t;
    for (int i = 0; i < 3; i++)
    {
        cin >> t;
        if (t != "bubble" && t != "tapioka")
            v.push_back(t);
    }
    if (v.size() == 0)
        cout << "nothing";
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << ((i != v.size() - 1) ? ' ' : '\n');
        }
    }

    return 0;
}