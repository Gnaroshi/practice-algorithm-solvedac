// problem: 콘테스트
// id: 5576
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a = 0, b = 0, t;
    vector<int> w, k;
    for (int i = 0; i < 10; i++)
    {
        cin >> t;
        w.push_back(t);
    }
    for (int i = 0; i < 10; i++)
    {
        cin >> t;
        k.push_back(t);
    }
    sort(w.begin(), w.end(), greater<>());
    sort(k.begin(), k.end(), greater<>());
    for (int i = 0; i < 3; i++)
        a += w[i];
    for (int i = 0; i < 3; i++)
        b += k[i];
    cout << a << ' ' << b;

    return 0;
}