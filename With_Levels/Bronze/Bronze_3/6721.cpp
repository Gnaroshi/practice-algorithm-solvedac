// problem: Backward numbers
// id: 6721
// time taken:
#include <bits/stdc++.h>
using namespace std;

int rtoo(int a)
{
    int t = a;
    int len = 1;
    int ret = 0;
    while (t > 0)
    {
        t /= 10;
        len *= 10;
    }
    t = a;
    while (t > 0)
    {
        len /= 10;
        ret += len * (t % 10);
        t /= 10;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        cout << rtoo(rtoo(a) + rtoo(b)) << '\n';
    }

    return 0;
}