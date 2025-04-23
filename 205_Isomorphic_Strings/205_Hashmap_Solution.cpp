class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;

        for (int i = 0; i < s.length(); i++) {
            if (maps.find(s[i]) == maps.end()) {
                maps[s[i]] = i;
            }

            if (mapt.find(t[i]) == mapt.end()) {
                mapt[t[i]] = i;
            }

            if (maps[s[i]] != mapt[t[i]]) {
                return false;
            }
        }

        return true;     
    }
};
