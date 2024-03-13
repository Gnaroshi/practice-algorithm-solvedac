// problem: 나의 학점은?
// id: 17826
// time taken:
#include <bits/stdc++.h>
using namespace std;
string sc[] = {"A+", "A0", "B+", "B0", "C+", "C0", "F"};
int ad[] = {5, 15, 30, 35, 45, 48, 50};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, loc;
    vector<int> v(50);
    for (auto &i : v)
        cin >> i;
    cin >> h;
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == h)
        {
            loc = i;
            break;
        }
    }
    int r = 0;
    while (true)
    {
        if (loc < ad[r])
        {
            cout << sc[r];
            break;
        }
        r++;
    }

    return 0;
}