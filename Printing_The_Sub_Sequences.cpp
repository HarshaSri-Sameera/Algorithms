#include<bits/stdc++.h>

using namespace std;

void printSubSeq(int ind, int n, vector<int>&ds, int a[])
{
    if(ind==n)
    {
        for(auto it:ds)
        {
        cout<<it<<" ";
        }
        cout<<"\n";
        return ;
    }
    ds.push_back(a[ind]);
    printSubSeq(ind+1,n,ds,a); // pick
    ds.pop_back();
    printSubSeq(ind+1,n,ds,a); // not pick
}

int main()
{
     int n;
     cin>>n;
     int a[n];
     vector<int>ds;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     printSubSeq(0,n,ds,a);
}
