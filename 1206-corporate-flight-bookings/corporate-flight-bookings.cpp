class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

     vector<int>mp(n+2,0);
        
        for(auto book:bookings){
            int start=book[0];
            int end=book[1];
            int seat=book[2];
                mp[start]+=seat;
                mp[end+1]-=seat;

        }
      
        vector<int>res(n);
          int sum = 0;

        for(int i = 1; i <= n; i++) {
            sum += mp[i];
            res[i - 1] = sum;
        }

        
  return res;
        
    }
};