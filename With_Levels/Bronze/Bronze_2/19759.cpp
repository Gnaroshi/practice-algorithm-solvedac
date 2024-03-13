// problem: <<Кто хочет стать миллионером?>>
// id: 19759
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t = 1;
    cin >> n;
    string s = "00";
    for (int i = 0; i < n; i++)
    {
        if (to_string(t).length() > s.length())
        {
            s += '0';
            t = t - t % 10 + 10;
            t /= 10;
        }
        cout << t << s << '\n';
        t *= 2;
    }

    return 0;
}