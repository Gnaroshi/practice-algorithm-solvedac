// problem: 어떤 호박의 할로윈 여행
// id: 3622
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, a, B, b, P;
    cin >> A >> a >> B >> b >> P;
    vector<pair<int, int>> v;
    v.push_back({A, a});
    v.push_back({B, b});
    sort(v.begin(), v.end());
    if ((v[0].first <= v[1].second && v[1].first <= P) || (A + B <= P))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}