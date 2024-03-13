// problem: 1차원 2048과 쿼리
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll bins[70];
ll cnts[70];
ll tcnts[70];
vector<ll> v;
ll ans = 1;
int nums = 0;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll bin = 1;
    for (int i = 0; i < 63; i++)
    {
        bins[i] = bin;
        bin *= 2;
    }

    int q;
    cin >> q;
    while (q--)
    {
        string temp;
        cin >> temp;

        ll inp = 0;
        ll d = 1;
        int iter = temp.length() - 1;
        for (int i = iter; i > 0; i--)
        {
            inp += (temp[i] - '0') * d;
            d *= 10;
        }

        int loc = 0;
        for (int j = 0; j < 63; j++)
        {
            if (bins[j] == inp)
            {
                loc = j;
                break;
            }
        }

        if (temp[0] == '+')
        {
            cnts[loc]++;
            nums++;
        }
        else if (temp[0] = '-')
        {
            cnts[loc]--;
            nums--;
        }

        for (int i = 0; i < 70; i++)
        {
            tcnts[i] = cnts[i];
        }

        if (nums == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            for (int i = 0; i < 63; i++)
            {
                if (tcnts[i] <= 1)
                    continue;
                else
                {
                    tcnts[i] -= 2;
                    tcnts[i + 1]++;
                    i--;
                }
            }
            for (int i = 63; i >= 0; i--)
            {
                if (tcnts[i] != 0)
                {
                    cout << bins[i] << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}