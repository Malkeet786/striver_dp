class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1, j = n - 1, tar = m + n - 1;
        while (j >= 0) {
            nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }
//         vector<int>temp1;
//         vector<int>temp2;
//         for(int i=0;i<m;i++)temp1.push_back(nums1[i]);
//         for(int i=0;i<n;i++)temp2.push_back(nums2[i]);
//         nums1.clear();
//         for(int i=0;i<m;i++) nums1.push_back(temp1[i]);
//         for(int i=0;i<n;i++) nums1.push_back(temp2[i]);
//         sort(nums1.begin(),nums1.end());
        
    }
};