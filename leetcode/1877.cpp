class Solution {
   public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int ans = 0;
        while (l < r) ans = max(ans, nums[l++] + nums[r--]);

        return ans;
    }
};
