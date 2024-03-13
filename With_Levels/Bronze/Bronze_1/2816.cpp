// problem: 디지털 티비
// id: 2816
// time taken:
#include <bits/stdc++.h>
using namespace std;
string A = "KBS1";
string B = "KBS2";

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    int k1 = (find(v.begin(), v.end(), A) - v.begin());
    int k2 = (find(v.begin(), v.end(), B) - v.begin());
    if (k1 > k2)
        k2++;
    for (int i = 0; i < k1; i++)
        cout << 1;
    for (int i = 0; i < k1; i++)
        cout << 4;
    for (int i = 0; i < k2; i++)
        cout << 1;
    for (int i = 1; i < k2; i++)
        cout << 4;

    return 0;
}