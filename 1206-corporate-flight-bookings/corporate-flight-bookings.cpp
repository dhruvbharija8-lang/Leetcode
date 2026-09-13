class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        map<long long,long long>mp;
        for(int i=1;i<=n;i++){
            mp[i]=0;
        }

        for(auto book:bookings){
            int start=book[0];
            int end=book[1];
            int seat=book[2];
                mp[start]+=seat;
                mp[end+1]-=seat;

        }
      
        vector<int>res;
        long long sum=0;
        long long prev=mp.begin()->first;
        for(auto it=mp.begin();it!=mp.end();it++){
            long long point=it->first;
            long long change=it->second;
          sum += change; 

            if(point <= n) {
                res.push_back(sum); 

        }
        }
  return res;
        
    }
};