// problem: IT Passport Examination
// id: 11257
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << s << ' ' << a + b + c;
        if (a >= 11 && b >= 8 && c >= 12 && a + b + c >= 55)
            cout << " PASS";
        else
            cout << " FAIL";
        cout << '\n';
    }

    return 0;
}