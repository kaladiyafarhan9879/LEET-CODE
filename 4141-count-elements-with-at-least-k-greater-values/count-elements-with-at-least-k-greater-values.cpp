class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) return n;

        sort(nums.begin(), nums.end());

        int x = nums[n - k];
        int ans = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

        return ans;
    }
};