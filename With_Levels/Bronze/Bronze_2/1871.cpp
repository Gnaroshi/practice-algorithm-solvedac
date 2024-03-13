// problem: 좋은 자동차 번호판
// id: 1871
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
        string s;
        cin >> s;
        int t = 0, r = 1;
        for (int i = 2; i >= 0; i--)
        {
            t += r * (s[i] - 'A');
            r *= 26;
        }
        if (abs(t - stoi(s.substr(4, 4))) > 100)
            cout << "not ";
        cout << "nice\n";
    }

    return 0;
}