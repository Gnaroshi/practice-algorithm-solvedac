#include <bits/stdc++.h>
using namespace std;

int card[1000000];
int score[1000000];

vector<int> v;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        card[temp] = 1;
        v.push_back(temp);
    }
    for (auto t : v)
    {
        int iter = 1000000 / t;
        for (int j = 2; j < iter; j++)
        {
            int mul = t * j;
            if (card[mul] == 1)
            {
                score[t]++;
                score[mul]--;
            }
        }
    }
    for (auto t : v)
    {
        cout << score[t] << ' ';
    }

    return 0;
}