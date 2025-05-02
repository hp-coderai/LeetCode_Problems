class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        deque<string> tokens;
        string token;
        
        while(getline(ss, token, '/')) {
            if(token.empty() || token == ".") {
                continue;
            }
            if(token == "..") {
                if(!tokens.empty()) {
                    tokens.pop_back();
                }
            } else {
                tokens.push_back(token);
            }
        }
        
        string ret;
        if(tokens.empty()) {
            return "/";
        }
        
        while(!tokens.empty()) {
            ret += "/" + tokens.front();
            tokens.pop_front();
        }
        
        return ret;
    }
};
