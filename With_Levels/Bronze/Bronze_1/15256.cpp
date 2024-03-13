// problem: Triple Jump
// id: 15256
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(2);
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n;
        cin >> n;
        double t;
        bool chk = false;
        vector<double> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t >= 30.0 && t <= 30.2)
                chk = true;
            if (chk)
                v.push_back(t);
        }
        if (v.size() < 3 || !chk)
            cout << 0.00 << '\n';
        else
            cout << (*min_element(v.begin() + 3, v.end()) - 30.0) << '\n';
        cout << '\n';
    }

    return 0;
}