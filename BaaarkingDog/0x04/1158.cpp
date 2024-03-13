#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int n, k; cin>>n>>k;
    int temp;
    queue<int> Q;
    for (int i = 0; i < n; i++) Q.push(i + 1);

    cout<<"<";
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < k - 1; i++)
        {
            temp = Q.front();
            Q.pop();
            Q.push(temp);
        }
        if (i == n - 1) cout<<Q.front()<<">";
        else cout<<Q.front()<<", ";
        Q.pop();
    }
    return 0;
}