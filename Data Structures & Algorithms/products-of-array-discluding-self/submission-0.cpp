class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v1(nums.size());
        vector<int> v2(nums.size());
        vector<int> ans(nums.size());

        int temp = 1;
        for (int i = 0; i < nums.size(); i++) {
            v1[i] = temp * nums[i];
            temp = v1[i];
        }

        temp = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            v2[i] = temp * nums[i];
            temp = v2[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                ans[i] = v2[i + 1];
            } else if (i == nums.size() - 1) {
                ans[i] = v1[i - 1];
            } else {
                ans[i] = v1[i - 1] * v2[i + 1];
            }
        }

        return ans;
    }
};
