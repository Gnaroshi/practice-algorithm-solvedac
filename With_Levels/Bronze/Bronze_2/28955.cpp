// problem: <<Кто хочет стать миллионером?>>
// id: 28955
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 1;
    cin >> n;
    string s = "00";
    for (int i = 0; i < n; i++)
    {
        cout << t << s << '\n';
        t *= 2;
        if (to_string(t).length() > s.length())
        {
            t = (t - t % 10 + 10) / 10;
            s += '0';
        }
    }

    return 0;
}