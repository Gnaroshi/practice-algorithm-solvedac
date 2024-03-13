#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c; cin>>a>>b>>c;
    int minN, maxN, midN;
    minN = min(a, min(b, c));
    maxN = max(a, max(b, c));
    if ((minN == a && maxN == b) || (minN == b && maxN == a))
    {
        midN = c;
    }
    else if ((minN == b && maxN == c) || (minN == c && maxN == b))
    {
        midN = a;
    }
    else
    {
        midN = b;
    }
    cout<<minN<<" "<<midN<<" "<<maxN;
    return 0;
}