class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        // Step 1: Find two potential candidates
        for(int num : nums) {

            if(cnt1 == 0 && num != el2) {
                el1 = num;
                cnt1 = 1;
            }
            else if(cnt2 == 0 && num != el1) {
                el2 = num;
                cnt2 = 1;
            }
            else if(num == el1) {
                cnt1++;
            }
            else if(num == el2) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Step 2: Verify candidates
        cnt1 = 0;
        cnt2 = 0;

        for(int num : nums) {
            if(num == el1)
                cnt1++;
            else if(num == el2)
                cnt2++;
        }

        vector<int> ans;

        if(cnt1 > nums.size()/3)
            ans.push_back(el1);

        if(cnt2 > nums.size()/3)
            ans.push_back(el2);

        return ans;
    }
};   