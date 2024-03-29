class Solution {
public:
    int mySqrt(int x) {
        int left = 1, right = x;
        while(left<=right){
            int mid = right - (right-left)/2;
            if(mid == x/mid)
                return mid;
            else if(mid > x/mid){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};