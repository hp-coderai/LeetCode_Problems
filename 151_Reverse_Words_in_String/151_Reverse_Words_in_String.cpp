class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word;
        vector<string> words;

        while(iss>>word) {
            words.push_back(word);
        }

        int l = 0; 
        int r = words.size()-1;
        while(l<r) {
            swap(words[l], words[r]);
            l++;
            r--;
        }
        string res;
        for(const string& w: words){
            if (!res.empty()){
                res+= " ";
            }
            res+=w;
        }
        return res;
        
    }
};
