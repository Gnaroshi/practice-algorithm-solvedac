// // problem: C번 - 규칙적인 보스돌이
// // id:
// // time taken:
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// bool vist[13];
// int n, m, k, mx = 0;
// vector<ll> d, dm;
// vector<pair<ll, ll>> p;
// vector<pair<ll, ll>> v;

// void fn(int cnt, int pos)
// {
//     if (cnt == k)
//     {
//         ll h = 0, q = 0;
//         for (int i = 0; i < k; i++)
//         {
//             if (vist[i])
//             {
//                 h += p[i].first;
//                 q += p[i].second;
//             }
//         }
//         v.push_back({h, q});
//         return;
//     }
//     vist[pos] = 1;
//     fn(cnt + 1, pos + 1);
//     vist[pos] = 0;
//     fn(cnt + 1, pos + 1);
//     return;
// }

// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> m >> k;
//     d.resize(n);
//     dm.resize(n);
//     p.resize(k);
//     fill(dm.begin(), dm.end(), 0);
//     for (auto &i : d)
//     {
//         cin >> i;
//         i *= 900;
//     }
//     for (auto &i : p)
//         cin >> i.first >> i.second;

//     fn(0, 0);

//     sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         for (auto j : v)
//         {
//             if (j.first > d[i])
//                 break;
//             dm[i] = max(dm[i], j.second);
//         }
//     }
//     sort(dm.begin(), dm.end(), greater<>());
//     for (int i = 0; i < m; i++)
//         mx += dm[i];
//     cout << mx;

//     return 0;
// } // 합으로 해결 못함

// problem: C번 - 규칙적인 보스돌이
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool vist[13];
ll n, m, k, mx = 0;
vector<ll> d, dm;
vector<pair<ll, ll>> p;

void fn(int chr, int pos, ll tm, ll cdm)
{
    if (tm < 0)
        return;
    if (pos == k || tm == 0)
    {
        ll q = 0;
        for (int i = 0; i < k; i++)
        {
            if (vist[i])
                q += p[i].second;
        }
        dm[chr] = max(dm[chr], q);
        return;
    }
    ll t = tm - ((p[pos].first + cdm - 1) / cdm);
    if (t >= 0)
    {
        vist[pos] = 1;
        fn(chr, pos + 1, t, cdm);
    }
    vist[pos] = 0;
    fn(chr, pos + 1, tm, cdm);
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    d.resize(n);
    dm.resize(n);
    p.resize(k);
    fill(dm.begin(), dm.end(), 0);
    for (auto &i : d)
        cin >> i;
    for (auto &i : p)
        cin >> i.first >> i.second;
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        fill(vist, vist + k, 0);
        fn(i, 0, 900LL, d[i]);
    }
    sort(dm.begin(), dm.end(), greater<>());
    for (int i = 0; i < m; i++)
        mx += dm[i];
    cout << mx;

    return 0;
}