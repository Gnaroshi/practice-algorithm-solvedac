// problem: Which Way
// id: 5370
// time taken:
#include <bits/stdc++.h>
using namespace std;

string fn(int n)
{
    if (n == 0)
        return "left";
    int cnt = 0;
    while (n > 0)
    {
        if (n % 2)
            cnt++;
        else
            cnt--;
        n /= 2;
    }
    if (cnt > 0)
        return "right";
    else if (cnt < 0)
        return "left";
    return "straight";
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter;
    vector<int> v;
    while (cin >> n)
        v.push_back(n);
    iter = v.size();
    for (int i = 0; i < iter; i++)
    {
        cout << fn(v[i]);
        if (i != iter - 1)
            cout << '\n';
    }

    return 0;
}