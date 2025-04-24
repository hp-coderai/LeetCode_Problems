class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> res(26);
        for(int i=0;i < s.size();i++)
        {
            res[s[i] - 'a']++;
        }
        for(int i=0;i < t.size();i++)
        {
            res[t[i] - 'a']--;
        }
        for(int i=0;i < 26;i++)
        {
            if (res[i] !=0) {
                return false;
            }
        }
        return true;


    }
};
