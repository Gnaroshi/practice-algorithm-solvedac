// problem: Minimum Swap
// id: 7805
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s)
    {
        int iter = s.length(), cnt = 0;
        string t = s;
        sort(t.begin(), t.end());
        for (int i = 0; i < iter; i++)
        {
            if (s[i] != t[i])
            {
                auto j = s.find(t[i]);
                swap(s[j], s[i]);
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}