class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end()); 
        int ans = 0 ; 
        for(auto num : st){
            int len = 1 ;
            if(st.find(num-1)==st.end()){
                while(st.find(num + len) != st.end()){
                    len++ ;
                }
            }
            ans = max(ans, len) ;
        }
        return ans ;
    }
};
