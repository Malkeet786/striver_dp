int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++)v.push_back({end[i],start[i]});
        sort(v.begin(),v.end());
        int ans=1,p=v[0].first;
        for(int i=1;i<n;i++)if(v[i].second>p)ans++,p=v[i].first;
        return ans;
    
    }