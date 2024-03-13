// problem: Gömda ord
// id: 24196.cpp
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;
    int iter = temp.length();
    for (int i = 0; i < iter;)
    {
        cout << temp[i];
        i += temp[i] - 'A' + 1;
    }

    return 0;
}