// problem: 풀만한문제
// id: 29716
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int j, n, cnt = 0;
    cin >> j >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        int t = 0;
        for (auto c : s)
        {
            if (c == ' ')
                t += 1;
            else if (isalpha(c))
            {
                if (isupper(c))
                    t += 4;
                else
                    t += 2;
            }
            else
                t += 2;
        }
        if (t <= j)
            cnt++;
    }
    cout << cnt;

    return 0;
}