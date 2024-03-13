// problem: Take Your Vitamins
// id: 4749
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, r, t;
    string u, v;
    vector<string> vs;
    cout << fixed;
    while (true)
    {
        cin >> a >> u >> r;
        cin.ignore();
        getline(cin, v);
        if (a < 0)
            break;
        t = a * 100.0 / r;
        if (t >= 1.0)
            cout << v << ' ' << setprecision(1) << floor(10 * a) / 10.0 << ' ' << u << ' ' << setprecision(0) << t << "%\n";
        else
            vs.push_back(v);
    }
    cout << "Provides no significant amount of:\n";
    if (!vs.empty())
    {
        for (auto i : vs)
            cout << i << "\n";
    }
    return 0;
}
