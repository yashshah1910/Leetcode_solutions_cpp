class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int arr_product = 1;
        bool zero=false, multi_zero=false;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(zero==false){
                    zero=true;
                }
                else{
                    multi_zero=true;
                }
            }
            else{
                arr_product=arr_product*nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(zero==false){
                ans.push_back(arr_product/nums[i]);
            }
            else{
                if(nums[i]==0 && multi_zero==false){
                    ans.push_back(arr_product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};