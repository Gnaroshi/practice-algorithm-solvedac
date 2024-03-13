// problem: 괴짜 교수
// id: 11109
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
        int d, n, s, p;
        cin >> d >> n >> s >> p;
        int t = d + (p - s) * n;
        if (t == 0)
            cout << "does not matter";
        else if (t > 0)
            cout << "do not parallelize";
        else
            cout << "parallelize";
        cout << '\n';
    }

    return 0;
}