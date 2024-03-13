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
        int s = 0;
        vector<int> v;
        for (int i = 0; i < 7; i++)
        {
            int temp;
            cin >> temp;

            if (temp % 2 == 0)
            {
                s += temp;
                v.push_back(temp);
            }
        }
        sort(v.begin(), v.end());
        cout << s << ' ' << v.front() << '\n';
    }

    return 0;
}