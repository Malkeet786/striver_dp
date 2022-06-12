class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                swap(nums[count],nums[i]);
                count++;
            }
        }
        for(int i=count;i<n;i++){
            if(nums[i]==1){
                swap(nums[count],nums[i]);
                count++;
            }
        }
       
    }
};