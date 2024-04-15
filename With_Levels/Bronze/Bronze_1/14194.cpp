// problem: Grades
// id: 14194
// tag:
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
        int n;
        double a, b, s = 0;
        cin >> n;
        vector<double> v(n);
        for (auto &i : v)
        {
            cin >> i;
            s += i;
        }
        a = *max_element(v.begin(), v.end());
        a += *min_element(v.begin(), v.end());
        a /= 2.0;
        s /= n;
        if (abs(s - a) <= 1.0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}