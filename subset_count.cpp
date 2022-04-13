#include<bits/stdc++.h>
using namespace std;

int CheckSubSeq(int ind, int sum, int n, int t, int a[])
{
    int l, r; 
    int count = 0;
    if(ind == n)
    {
        if(sum == t) 
        {
            return 1;
        }
        else return 0;
    }
    sum = sum + a[ind];

    l = CheckSubSeq(ind+1, sum, n, t, a);
    sum = sum - a[ind];
    r = CheckSubSeq(ind+1, sum, n, t, a);

    // if(CheckSubSeq(ind+1, sum, n, t, a) == true) 
    // {
    //     return true;
    // }
    // sum = sum - a[ind];
    // if(CheckSubSeq(ind+1, sum, n, t, a) == true)
    // {
    //     return true;
    // }

    return l+r;
}
int main()
{
     int n, t;
     cin>>n>>t;
     int a[n], ind = 0, sum = 0;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     cout<<CheckSubSeq(ind, sum, n, t, a);
     // if(CheckSubSeq(ind, sum, n, t, a))
     // {
     //    cout<<"Yes";
     // }
     // else{
     //    cout<<"No";
     // }
}


//Input
// 3 5
// 1 2 1
