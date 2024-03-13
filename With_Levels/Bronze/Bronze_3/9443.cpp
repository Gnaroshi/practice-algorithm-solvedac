// problem: Arrangement of Contest
// id: 9443
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;
    char c = 'A';
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        if (i[0] == c)
            c++;
        else if (i[0] == c - 1)
            continue;
        else
            break;
    }
    cout << c - 'A';

    return 0;
}