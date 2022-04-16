class Solution {
public:
    void pp()
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        int vs[n]=0;
        
        if(n==ds.size())
        {
            for(aurto it:ds)
            {
                cout<<it<<' ';
            }
            cout<<"\n";
            return ;
        }
        for(int i=0;i<n;i++)
        {
            if(vs[i]!=1)
            {
                vs[i]=1;
            ds.push_back(nums[i]);
                pp(n,nums,ds,vi);
                v[i]=0;
                ds.pop_back();
            }
        }
        
    }
};
