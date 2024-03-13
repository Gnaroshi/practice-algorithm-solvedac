// problem: Binary numbers
// id: 3460
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
        vector<int> v;
        int n;
        cin >> n;
        while (n > 0)
        {
            v.push_back(n % 2);
            n /= 2;
        }
        int loc = 0;
        for (auto i : v)
        {
            if (i == 1)
                cout << loc << ' ';
            loc++;
        }
    }

    return 0;
}
