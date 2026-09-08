class Solution {
public:
    int countCommas(int n) {
        long long total=0;
        if(n>=1000){
            total +=min (n,999999)-999;
        }
        if(n>=1000000){
            total += (min(n,999999999)-999999)*2;
        }
        if(n>=1000000000){
            total+=(n-999999999)*3;
        }
        return total;
    }
};