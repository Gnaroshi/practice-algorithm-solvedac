// problem: Where Am I?
// id: 18269
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s, t;
    cin >> n >> s;

    for (int i = 1; i < n; i++)
    {
        bool chk = true;
        set<string> k;
        for (int j = 0; j < n - i + 1; j++)
        {
            t = s.substr(j, i);
            if (k.find(t) != k.end())
            {
                chk = false;
                break;
            }
            k.insert(t);
        }
        if (chk)
        {
            cout << i;
            return 0;
        }
    }

    cout << n;

    return 0;
}