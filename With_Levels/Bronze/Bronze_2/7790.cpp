// problem: Joke
// id: 7790
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int ans = 0;
    string s;
    while (getline(cin, s))
    {
        int iter = s.length();
        if (iter < 3)
            continue;
        for (int i = 0; i < iter - 3; i++)
        {
            if (s.substr(i, 4) == "joke")
                ans++;
        }
    }
    cout << ans;
    return 0;
}