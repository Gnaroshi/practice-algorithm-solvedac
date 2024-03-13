#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int age;
    string name;
} S;

bool compare(S a, S b)
{
    return a.age < b.age;
}

int main(void)
{
    int n;
    cin >> n;
    vector<S> V;
    int temp_n = n;
    int temp_int;
    string temp_str;
    while (n--)
    {
        cin >> temp_int >> temp_str;
        V.push_back({temp_int, temp_str});
    }

    stable_sort(V.begin(), V.end(), compare);

    for (auto usr : V)
    {
        cout << usr.age << " " << usr.name << '\n';
    }

    return 0;
}