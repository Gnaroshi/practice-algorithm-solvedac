// problem: SPIN
// id: 4872
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
    vector<int> v(iter);
    fill(v.begin(), v.end(), 0);
    for (int i = 0; i < iter; i++)
        v[i] += s[i] - '0';
    while (cin >> s)
    {
        for (int i = 0; i < iter; i++)
            v[i] += s[i] - '0';
    }
    for (int i = 0; i < iter; i++)
        cout << v[i] % 10;

    return 0;
}