// problem: Superlatives
// id: 6162
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Data Set " << i << ":\n";
        double a, b;
        cin >> a >> b;
        int cnt = 0;
        a /= b;
        int t = 5;
        while (a > t)
        {
            cnt++;
            t *= 5;
        }

        if (cnt)
            for (int j = 0; j < cnt; j++)
                cout << "mega ";
        else if (!cnt && a < b)
            cout << "no ";
        cout << "drought\n";

        if (i != tc)
            cout << '\n';
    }

    return 0;
}