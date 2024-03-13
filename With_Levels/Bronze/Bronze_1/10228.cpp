// problem: Memory
// id: 10228
// time taken:
#include <bits/stdc++.h>
using namespace std;

char faceup(int n);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> v(26);
    for (auto &i : v)
        i.first = i.second = 0;
    for (int i = 1; i < 51; i++)
    {
        int c = faceup(i) - 'A';
        if (v[c].first)
            v[c].second = i;
        else
            v[c].first = i;
    }
    for (auto i : v)
    {
        if (i.first)
        {
            faceup(i.first);
            faceup(i.second);
        }
    }

    return 0;
}