class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=i+1, k=1;
        while(j<nums.size()){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
                k++;
            }
            j++;
        }
        return k;
    }
};