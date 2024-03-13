#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int tc; cin>>tc;
    int temp;
    stack<int> S;
    while(tc)
    {
        cin>>temp;
        if (temp == 0) S.pop();
        else S.push(temp);
        tc--;
    }

    int64_t sum = 0;
    int Ssize = S.size();
    for (int i = 0; i < Ssize; i++)
    {
        sum += S.top();
        S.pop();
    }
    cout<<sum<<"\n";
    return 0;

}
