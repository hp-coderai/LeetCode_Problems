class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map< string , vector<string>> d;
        for (string s: strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            d[temp].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto it = d.begin(); it != d.end(); it++) {
            ans.push_back(it->second);
        }
            
        return ans;
        
    }
};
