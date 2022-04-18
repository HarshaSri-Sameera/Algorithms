#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int, int> mp;
    vector<int> v;
    int n, k, count = 0;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<n-k+1; i++)
    {
        cout<<"the value of i is: "<<i<<" and limit is "<<n-k<<"\n";
        mp.clear();
        count = 0;
        for(int j=i; j<i+k; j++)
        {
            mp[arr[j]]++;      
        }
        for(auto it: mp)
        {
            cout<<"map elements "<<it.first<<" "<<it.second<<"\n";
            if(it.second > 1)
            {
                count = -1;
                break;
            }
            else{
                count++;
            }
        }
        if(count != -1)
            v.push_back(count);
        cout<<"window completed!"<<"\n";
        
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}


// 7 3
// 1 3 2 3 5 9 0
// output: 3 3 3 3
