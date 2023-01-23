class Solution {
public:
    
    vector<vector<int>> ans;
    
    void subset(vector<int> nums, int i, vector<int> temp){
        //base condition
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        //not take it
        subset(nums, i+1, temp);
        //take it
        temp.push_back(nums[i]);
        subset(nums, i+1, temp);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        subset(nums, 0, temp);
        return ans;
    }
    
};