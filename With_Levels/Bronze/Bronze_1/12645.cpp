// problem: The Next Number (Small)
// id: 12645
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        int n, t;
        cin >> n;
        t = n;
        vector<int> v, cnt;
        while (t > 0)
        {
            cnt.push_back(t % 10);
            t /= 10;
        }
        cnt.push_back(0);
        sort(cnt.begin(), cnt.end());
        do
        {
            t = 0;
            for (auto i : cnt)
            {
                t += i;
                t *= 10;
            }
            v.push_back(t / 10);
        } while (next_permutation(cnt.begin(), cnt.end()));
        sort(v.begin(), v.end());
        t = v.size();
        for (int i = 0; i < t; i++)
        {
            if (v[i] == n)
            {
                cout << v[i + 1] << '\n';
                break;
            }
        }
    }

    return 0;
}