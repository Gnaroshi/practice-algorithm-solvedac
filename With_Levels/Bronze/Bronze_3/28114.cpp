// problem: 팀명 정하기
// id: 28114
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
    return a.first > b.first;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, string>> v1;
    vector<pair<int, string>> v2;
    for (int i = 0; i < 3; i++)
    {
        int a, b;
        string s;
        cin >> a >> b >> s;
        v1.push_back({b % 100, s});
        v2.push_back({a, s});
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), comp);
    for (auto i : v1)
        cout << i.first;
    cout << '\n';
    for (auto i : v2)
        cout << i.second[0];
    cout << '\n';
    return 0;
}
