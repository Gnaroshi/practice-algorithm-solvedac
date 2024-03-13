#include <bits/stdc++.h>
using namespace std;

const int M = 1000003;
int my_hash(int x)
{
    return (M + x % M) % M;
}

// const int M = 1000003;
// int hash(string &s)
// {
//     int h = 0;
//     for (auto x : s)
//         h += x;
//     return h % M;
// }

const int M = 1000003;
const int a = 1000;
int my_hash_rolling(string &s)
{
    int h = 0;
    for (auto x : s)
        h = (h * a + x) % M;
    return h;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}