#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> mnh;

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
            if (mnh.empty())
                cout << 0 << '\n';
            else
            {
                cout << mnh.top() << '\n';
                mnh.pop();
            }
        }
        else
        {
            mnh.push(temp);
        }
    }

    return 0;
}