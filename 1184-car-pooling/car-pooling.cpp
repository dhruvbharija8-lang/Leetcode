class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>hash(1001,0);
        
        for(auto trip:trips){
          int  pass=trip[0];
          int  start=trip[1];
         int   end=trip[2];
             hash[start]+=pass;
        hash[end]-=pass;
        }
       
        int count=0;
        for(int i=0;i<1001;i++){
            count+=hash[i];
              if(count>capacity){
            return false;
        }
        }
      
    return true;
    }
};