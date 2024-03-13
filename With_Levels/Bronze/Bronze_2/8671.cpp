// problem: Długa taśma
// id: 8671
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(2);
    int n;
    cin >> n;
    vector<double> v(n);
    for (auto &i : v)
        cin >> i;
    cout << *min_element(v.begin(), v.end());

    return 0;
}