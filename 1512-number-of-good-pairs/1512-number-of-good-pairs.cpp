class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>temp(101);
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        sort(temp.begin(), temp.end(), greater<int>());
        
        int i=0, count=0;
        while(temp[i]!=0 && i<=100){
            if(temp[i]>1){
                count+=(temp[i]*(temp[i]-1)/2);
            }
            i++;
        }
        return count;
    }
};