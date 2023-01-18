// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:  
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while(left<=right){
            int mid = right - (right-left)/2;
            bool midVersion = isBadVersion(mid);
            if((midVersion == true) && (isBadVersion(mid-1) == false)){
                return mid;
            }
            else if(midVersion == true){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return -1;
    }
};