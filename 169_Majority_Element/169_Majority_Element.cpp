class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;

        for(int i = 0; i<n; i++) {
            map[nums[i]]++;
        }
        n=n/2;
        for(auto m:map){
            if (n<m.second){
                return m.first;
            }
        }
        return 0;
    }
};
