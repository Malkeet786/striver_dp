class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int curcount=1,longcount=1;
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                    curcount+=1;
                }else{
                    longcount=max(longcount,curcount);
                    curcount=1;
                }
            }
        }return max(longcount,curcount) ;
    }
};