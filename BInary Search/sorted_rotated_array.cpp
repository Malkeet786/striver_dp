class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(nums[mid]==nums[mid^1]){
                low=mid+1;
            }else
                high=mid-1;
        }return nums[low];
        // map<int,int>mp;
        // for(auto &i:nums){
        //     mp[i]++;
        // }
        // for(auto it:mp){
        //     if(it.second==1){
        //         return it.first;
        //     }
        // }
        // return -1;
    }
};