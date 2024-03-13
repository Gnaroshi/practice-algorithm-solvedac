// problem: 지우개
// id: 21756
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 1; i <= n; i++)
        a.push_back(i);

    while (true)
    {

        if (a.size() == 1)
        {
            cout << a.front();
            return 0;
        }
        int iter = a.size();
        for (int i = 1; i < iter; i += 2)
        {
            b.push_back(a[i]);
        }
        a.clear();
        a.resize(b.size());
        copy(b.begin(), b.end(), a.begin());

        b.clear();
    }

    return 0;
}