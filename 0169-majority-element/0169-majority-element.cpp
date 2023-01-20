class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>hash;
        
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        int ans;
        for(auto it: hash){
            if(it.second>n/2){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};