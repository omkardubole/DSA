class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mpp;

        for(int x : nums1) {
            mpp[x]++;
        }

        for(int x : nums2) {
            if(mpp[x] > 0) {
                ans.push_back(x);
                mpp[x]--;
            }
        }
        return ans;
    }
};