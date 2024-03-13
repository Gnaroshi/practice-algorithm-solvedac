// problem: Elder
// id: 17042
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    int tc, cnt = 0;
    int wi[26] = {0};
    cin >> c >> tc;
    while (tc--)
    {
        char a, b;
        cin >> a >> b;
        wi[c - 'A']++;
        if (b == c)
        {
            wi[c - 'A']++;
            c = a;
        }
    }
    for (int i = 0; i < 26; i++)
        if (wi[i])
            cnt++;
    cout << c << '\n'
         << cnt;

    return 0;
}