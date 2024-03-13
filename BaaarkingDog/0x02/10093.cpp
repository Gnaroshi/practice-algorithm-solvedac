#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long val1, val2, cnt, cnt2;
    cin>>val1>>val2;
    cnt = max(val1, val2) - min(val1, val2) - 1;
    cnt2 = min(val1, val2) + 1;
    if (cnt > 0) 
    {
        cout<<cnt<<"\n";
        while(cnt--)cout<<cnt2++<<" ";
    }
    else cout<<0<<"\n";
    return 0;

}