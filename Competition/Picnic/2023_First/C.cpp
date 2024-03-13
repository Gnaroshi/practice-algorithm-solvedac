// problem: C번 - 선택의 기로
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b)
         {
        if(a.first == b.first)return a.second < b.second;
        return a.first > b.first; });
    cout << v[0].first << ' ' << v[0].second << ' ' << v[1].first << ' ' << v[1].second << '\n';
    sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b)
         {
        if(a.second == b.second)return a.first > b.first;
        return a.second < b.second; });
    cout << v[0].first << ' ' << v[0].second << ' ' << v[1].first << ' ' << v[1].second << '\n';

    return 0;
}