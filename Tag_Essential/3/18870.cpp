// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// bool compV(pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b)
// {
//     return a.second.first < b.second.first;
// }

// bool compL(pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b)
// {
//     return a.first < b.first;
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n;
//     cin >> n;

//     if (n == 1)
//     {
//         cout << "0\n";
//         return 0;
//     }

//     // loc, value, clamped value
//     vector<pair<ll, pair<ll, ll>>> V(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> V[i].second.first;
//         V[i].first = i;
//     }

//     sort(V.begin(), V.end(), compV);

//     int dif_cnt = 0;
//     V[0].second.second = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (V[i].second.first != V[i + 1].second.first)
//         {
//             V[i].second.second = dif_cnt;
//             dif_cnt++;
//             V[i + 1].second.second = dif_cnt;
//         }
//         else
//         {
//             V[i].second.second = dif_cnt;
//         }
//     }
//     V[n - 1].second.second = dif_cnt;

//     if (V[n - 1].second.first > V[n - 2].second.first && n > 2)
//     {
//         V[n - 1].second.second++;
//     }

//     sort(V.begin(), V.end(), compL);

//     for (int i = 0; i < n; i++)
//     {
//         cout << V[i].second.second << " ";
//     }

//     return 0;
// }
// 21%

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> srtd;
    vector<ll> orgn;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        srtd.push_back(temp);
        orgn.push_back(temp);
    }

    sort(srtd.begin(), srtd.end());
    srtd.erase(unique(srtd.begin(), srtd.end()), srtd.end());

    for (int i = 0; i < n; i++)
        cout << lower_bound(srtd.begin(), srtd.end(), orgn[i]) - srtd.begin() << " ";

    return 0;
}