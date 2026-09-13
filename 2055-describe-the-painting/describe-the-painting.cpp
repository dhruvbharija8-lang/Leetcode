class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<long long,long long>mp;
        for(auto seg:segments){
            int start=seg[0];
            int end=seg[1];
            int color=seg[2];
            mp[start]+=color;
            mp[end]-=color;

            
        }
        vector<vector<long long >>res;
        long long sum=0;
        long long prev=mp.begin()->first;

        for(auto it=mp.begin();it!=mp.end();it++){
            long long point=it->first;
            long long change=it->second;
            if(prev!=point&& sum!=0){
                res.push_back({prev,point,sum});
}   
        sum+=change;
            prev=point; 
                }
                return res;
        
    }
};