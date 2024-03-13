#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 3;
    int a, b, c, d, sum;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        sum = a + b + c + d;
        if (sum != 4) cout<<(char)((4 - sum) + 64)<<"\n";
        else cout<<"E"<<"\n";
    }
    return 0;
}