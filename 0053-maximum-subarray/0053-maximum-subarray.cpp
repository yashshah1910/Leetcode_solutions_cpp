class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=0, global=INT_MIN;
        for(int i=0;i<nums.size();i++){
            current=max(current+nums[i], nums[i]);
            global=max(current, global);
        }
        return global;
    }
};