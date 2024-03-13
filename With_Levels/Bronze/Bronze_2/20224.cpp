// problem: Count <s>Down</s> Up 2020
// id: 20224
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        string s = "";
        char c;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            s.push_back(c);
        }
        for (int i = 0; i < n - 3; i++)
        {
            if (s.substr(i, 4) == "2020")
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}