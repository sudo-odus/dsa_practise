// link to question
// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int low=2;
        int high=x/2;
        while(low<=high){
            int mid=low+(high-low)/2;   //to handle int overflow
            long current_square=(long)mid*mid;   //to handle int overflow
            if(current_square==x)
                return(mid);
            else if(current_square>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return(high);
    }
};