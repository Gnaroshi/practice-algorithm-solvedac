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
        multiset<int> ms;

        int k;
        cin >> k;
        while (k--)
        {
            char oper;
            int n;
            cin >> oper >> n;
            if (oper == 'I')
            {
                ms.insert(n);
            }
            else
            {
                if (ms.empty())
                    continue;
                if (n == 1)
                {
                    ms.erase(prev(ms.end()));
                }
                else
                    ms.erase(ms.begin());
            }
        }
        if (!ms.empty())
            cout << *prev(ms.end()) << ' ' << *ms.begin() << '\n';
        else
            cout << "EMPTY\n";
    }

    return 0;
}