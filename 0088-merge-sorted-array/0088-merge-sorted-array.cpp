class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int>res;
        int i;
        for(i=0; i<m; i++)
        {
            res.push_back(nums1[i]);
        }
        for(i=0; i<n; i++)
        {
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        for(i=0; i<(m+n); i++)
        {
            nums1[i]=res[i];
        }
    }
};