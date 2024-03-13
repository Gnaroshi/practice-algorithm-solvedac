// problem: 모르고리즘 회장 정하기
// id: 30684
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    string t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t.length() == 3)
            v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout << v.front();

    return 0;
}