// problem: 도비의 영어 공부
// id: 2386
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    while (true)
    {
        cin >> c;
        if (c == '#')
            break;
        cin.ignore();
        string s;
        int cnt = 0;
        getline(cin, s);
        for (auto i : s)
        {
            if (isalpha(i))
            {
                if (tolower(i) == c)
                    cnt++;
            }
        }
        cout << c << ' ' << cnt << '\n';
    }

    return 0;
}