class Solution {
public:
    int findNthDigit(int n) {
        long long d=1;
        long long c=9;
        long long s=1;
        while(n>d*c){
            n-=d*c;
            d++;
            c*=10;
            s*=10;

        }
        int num=s+(n-1)/d;
        int index=(n-1)%d;
        string k=to_string(num);
        return k[index]-'0';
        
    }
};