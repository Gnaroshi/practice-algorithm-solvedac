#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s1, s2;
    cin >> s1 >> s2;
    long long stc;
    long long mca;
    long long tc;
    int p = 0;
    string ans[3] = {"Accepted", "Wrong Answer", "Why Wrong!!!"};
    for (int i = 0; i < s1; i++)
    {
        cin >> stc >> mca;
        if (stc != mca)
            p = 1;
    }
    for (int i = 0; i < s2; i++)
    {
        cin >> tc >> mca;
        if (tc != mca && p == 0)
            p = 2;
    }
    cout << ans[p] << '\n';

    return 0;
}