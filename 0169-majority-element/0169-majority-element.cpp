class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int>hash;
        
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int count=0, ans;
        for(auto it: hash){
            if(it.second>count){
                count=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};