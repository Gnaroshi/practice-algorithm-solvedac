// problem: Headshot
// id: 3546
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int iter = s.length();
    double sh, ro, a = 0, b = 0, c = 0;
    s += s.front();
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '0')
        {
            if (s[i + 1] == '0')
                a++;
            else
                b++;
            c++;
        }
    }
    sh = a / (a + b);
    ro = c / iter;
    if (sh > ro)
        cout << "SHOOT";
    else if (abs(sh - ro) <= 0.000000000001)
        cout << "EQUAL";
    else
        cout << "ROTATE";

    return 0;
}