#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin>>tc;
    int a, b;
    while(tc--)
    {
        cin>>a>>b;
        cout<<a+b<<"\n";
    }
    return 0;
}