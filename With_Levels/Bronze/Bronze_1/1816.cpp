// problem: 암호 키
// id: 1816
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int SIZE = 1000005;

vector<int> p;
bool isP[SIZE];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill(isP, isP + SIZE, 1);
    for (int i = 2; i <= SIZE; i++)
    {
        if (isP[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j > SIZE)
                break;
            isP[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }

    int n;
    cin >> n;

    while (n--)
    {
        ll s;
        cin >> s;
        bool chk = true;
        vector<int> v;
        for (auto i : p)
        {
            if (s % i == 0)
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? "YES\n" : "NO\n");
    }
    return 0;
}