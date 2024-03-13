// problem: 문자 인식
// id: 3448
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--)
    {
        string s;
        double a = 0, b = 0, t;
        while (true)
        {
            getline(cin, s);
            if (s.size() == 0)
                break;
            for (auto i : s)
                if (i == '#')
                    a++;
            b += s.size();
        }
        t = 1 - a / b;
        t = round(t * 1000) / 10;
        cout << "Efficiency ratio is " << t << "%.\n";
    }

    return 0;
}
