class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int len = 0;
        unordered_map<char, int> mp;
        int l = 0;

        for (int r=0; r<n; r++) {
            if ((mp.count(s[r]) == 0) || (mp[s[r]] < l)) {  
                len = max(len, r-l+1);
            }
            else {
                l = mp[s[r]] +1;  
            }
            mp[s[r]] = r;
        }
        return len;
    }
};
