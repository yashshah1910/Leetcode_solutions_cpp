class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        float median;
        // cout<<nums1.size()<<endl;
        if(nums1.size()%2!=0){
            median=nums1[(nums1.size()-1)/2];
        }
        else{
            median=(nums1[(nums1.size()/2)-1]+nums1[nums1.size()/2])/2.0;
            
        }
        // cout<<nums1[(nums1.size()/2)-1]<<endl;
        // cout<<nums1[nums1.size()/2]<<endl;
        // cout<<(nums1[(nums1.size()/2)-1]+nums1[nums1.size()/2])/2.0<<endl;
        return median;
    }
};