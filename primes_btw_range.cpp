#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    bool c=1;
    if(n==1||n==0) return false;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c=0;
        }
    }
    if(!c)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int l=2,h=13;
    int count=0;
    for(int i=l;i<=h;i++)
    {
        if(prime(i))
        {
            count++;
            cout<<i<<" ";
        }
        // else{
        //     cout<<i<<" ";
        // }
    }
    cout<<"\n";
    cout<<"The prime no.'s between the range is "<<count;
    return 0;
}
