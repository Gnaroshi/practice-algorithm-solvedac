// problem: 반올림
// id: 4539
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t = "";
        cin >> s;
        int iter = s.length();
        if (iter == 1)
            cout << s << '\n';
        else
        {
            reverse(s.begin(), s.end());
            vector<int> v;
            for (auto i : s)
                v.push_back(i - '0');
            bool chk = false;
            for (int i = 0; i < iter - 1; i++)
            {
                if (v[i] >= 5)
                {
                    if (i != iter - 1)
                        v[i + 1]++;
                    else
                        chk = true;
                }
                v[i] = 0;
            }
            if (chk)
                v.push_back(1);
            vector<int>::reverse_iterator ri = v.rbegin();
            for (; ri != v.rend(); ri++)
                cout
                    << *ri;
            cout << '\n';
        }
    }

    return 0;
}