#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(a) > abs(b))
            return true;
        if (abs(a) == abs(b))
        {
            if (a > b)
                return true;
        }
        return false;
    }
};

priority_queue<int, vector<int>, cmp> absh;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
        {
            if (absh.empty())
                cout << 0 << '\n';
            else
            {
                cout << absh.top() << '\n';
                absh.pop();
            }
        }
        else
        {
            absh.push(temp);
        }
    }

    return 0;
}