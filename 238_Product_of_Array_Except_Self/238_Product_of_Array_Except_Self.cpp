class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pr(n);
        pr[0] = 1;
        for (int i = 1; i< n; i++) {
            pr[i] = pr[i-1]*nums[i-1];
        }
        int right = 1;
        for (int i = n-1; i>=0; i--) {
            pr[i] *= right;
            right *= nums[i];
        }
        return pr;
    }
};
