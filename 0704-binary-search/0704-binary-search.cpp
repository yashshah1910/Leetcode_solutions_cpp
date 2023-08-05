class Solution {
public:
    
    int binarySearch(vector<int>& nums, int left, int right, int target){
        if(left<=right){
            int mid = left + (right-left) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(target>nums[mid]){
                return binarySearch(nums, mid+1, right, target);
            }
            else{
                return binarySearch(nums, left, mid-1, target);
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target);
    }
};