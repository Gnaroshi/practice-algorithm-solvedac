#include <bits/stdc++.h>
using namespace std;

#define MX 100
#define ll long long

int n, m;
ll min_city_dist = 250000;
int board[MX][MX];
ll dist[MX][MX];

int chicken_cnt = 0;
int home_cnt = 0;
pair<int, int> home[MX];
pair<int, int> chicken[MX];

void init_board()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 2)
            {
                chicken[chicken_cnt] = {i, j};
                chicken_cnt++;
            }
            else if (board[i][j] == 1)
            {
                home[home_cnt] = {i, j};
                home_cnt++;
            }
        }

    return;
}

void get_dist()
{
    // cout << "home: " << home_cnt << " chicken: " << chicken_cnt << '\n';
    for (int i = 0; i < home_cnt; i++)
    {
        for (int j = 0; j < chicken_cnt; j++)
        {
            dist[i][j] = abs(home[i].first - chicken[j].first) +
                         abs(home[i].second - chicken[j].second);
            // cout << "dist of home (" << home[i].first << ", " << home[i].second << ") and ("
            //      << chicken[j].first << ", " << chicken[j].second << ") is " << dist[i][j] << '\n';
        }
    }
}

// int get_pow2(int num)
// {
//     int temp_pow = 1;
//     for (int i = 0; i < num; i++)
//     {
//         temp_pow *= 2;
//     }
//     return temp_pow;
// }

void solv()
{
    get_dist();

    // int iter = get_pow2(chicken_cnt);
    // for (int tmp = 0; tmp < iter; tmp++)
    int iter = (1 << chicken_cnt);
    for (int tmp = 0; tmp < iter; tmp++)
    {
        ll mn = 0;
        int brute = tmp;

        int selected_chicken[MX] = {};
        int selected_chicken_cnt = 0;

        for (int i = 0; i < chicken_cnt; i++)
        {
            int dir = brute % 2;
            brute /= 2;
            selected_chicken[i] = dir;
            if (dir == 1)
                selected_chicken_cnt++;
            if (selected_chicken_cnt >= m)
                break;
        }

        // cout << "selected chicken cnt: " << selected_chicken_cnt << '\n';
        if (selected_chicken_cnt != m)
            continue;

        for (int i = 0; i < home_cnt; i++)
        {
            // ll home_min = 3001;
            ll home_min = 250000;
            for (int j = 0; j < chicken_cnt; j++)
            {
                if (selected_chicken[j] == 1)
                {
                    if (home_min > dist[i][j])
                        home_min = dist[i][j];
                }
            }
            mn += home_min;
            if (mn > min_city_dist)
                break;
        }
        // cout << "mn: " << mn << '\n';
        if (mn < min_city_dist)
            min_city_dist = mn;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    init_board();
    solv();

    cout << min_city_dist << '\n';
    return 0;
}