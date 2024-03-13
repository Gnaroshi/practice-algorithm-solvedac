// problem: Bank Card Verifier
// id: 15341
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "0000 0000 0000 0000")
            break;
        vector<int> v;
        for (auto i : s)
        {
            if (i == ' ')
                continue;
            v.push_back(i - '0');
        }

        int ts = 0;
        for (int i = 0; i < 16; i++)
        {
            if (i % 2 == 0)
            {
                v[i] *= 2;
                if (v[i] > 9)
                    v[i] -= 9;
            }
            ts += v[i];
        }
        if (ts % 10 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}