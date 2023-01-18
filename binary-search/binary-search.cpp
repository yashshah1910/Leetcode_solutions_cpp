class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int low=0, high=len-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(target > nums[mid]){
                low=mid+1;
            }
            else if(target < nums[mid]){
                high=mid;
            }
            if(target == nums[mid]){
                return mid;
            }
            
        }
        if(target == nums[high]){
                return high;
        }
        else if(target == nums[low]){
                return low;
        }
        else{
                return -1;
        }
    }
};