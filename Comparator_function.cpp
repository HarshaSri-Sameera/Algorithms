#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.first!=b.first)
    {
        if(a.first < b.first) return true;
        else return false;
    }
    else{
        if(a.second < b.second) return true;
        else return false;
    }
}
int main()
{
    int n; // Enter the number of vector elements
    cin>>n;
    vector<pair<int, int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=i+1; j<n; ++j)
    //     {
    //         if(cmp(v[i].first, v[i].second)
    //         {
    //             swap(v[i].first, v[i].second);
    //         }
    //     }
    // }
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}

// Input:
        //6
        // 25 6
        // 9 3
        // 4 8
        // 7 3
        // 7 2
        // 45 3

//Output:
        // 4 8
        // 7 2
        // 7 3
        // 9 3
        // 25 6
        // 45 3
