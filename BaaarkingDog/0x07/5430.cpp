#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int tc; cin>>tc;
    
    while(tc--)
    {
        deque<int> DQ;
        string p;
        cin>>p;

        int n; cin>>n;
        string tempArr;
        cin>>tempArr;
        
        
        int loc = 0;
        int deg = 1;
        int degLoc = 0;
        int tempInt[4] = { 0 };
        int tempSum = 0;
        while (loc < tempArr.length()) 
        {
            if (tempArr.length() == 2) break;
            loc++;
            if(tempArr[loc] == ',' || tempArr[loc] == ']')
            {
                degLoc--;
                while(degLoc != -1)
                {
                    tempSum += tempInt[degLoc] * deg;
                    deg *= 10;
                    degLoc--;
                }
                DQ.push_back(tempSum);
                tempSum = 0;
                deg = 1;
                degLoc = 0;

                if(tempArr[loc] == ']') break;
                continue;
            }
            else
            {
                tempInt[degLoc] = tempArr[loc] - 48;
                degLoc++;
            }
        }
        
        int pLoc = 0;
        bool isError = false;
        bool isReverse = false;
        while(pLoc < p.length())
        {
            if (p[pLoc] == 'R')
            {
                isReverse = !isReverse;
            }
            else
            {
                if (!DQ.empty())
                {
                    if(!isReverse)
                    {
                        DQ.pop_front();
                    }
                    else
                    {
                        DQ.pop_back();
                    }
                }
                else
                {
                    isError = true;
                    break;
                }
            }
            pLoc++;
        }

        if(!isError)
        {
            cout<<"[";
            if(!DQ.empty())
            {
                while(!DQ.empty())
                {
                    if(!isReverse)
                    {
                        if(DQ.size() == 1)
                        {
                            cout<<DQ.front()<<"]\n";
                            break;
                        }
                        cout<<DQ.front()<<",";
                        DQ.pop_front();
                    }
                    else
                    {
                        if(DQ.size() == 1)
                        {
                            cout<<DQ.back()<<"]\n";
                            break;
                        }
                        cout<<DQ.back()<<",";
                        DQ.pop_back();
                    }
                }
            }
            else cout<<"]\n";
            
        }
        else cout<<"error\n";

    }

    return 0;
}