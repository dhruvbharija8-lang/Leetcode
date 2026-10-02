class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long m=batteries.size();
        long long s=0;
        long long sum=0;
        for(int i=0;i<m;i++){
            sum+=batteries[i];
        }
        long long e=sum/n;
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long ene=0;
            for(int i=0;i<m;i++){
            ene += min((long long)batteries[i],mid);
            }
            if(ene>=mid*n){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return e;
    }
};