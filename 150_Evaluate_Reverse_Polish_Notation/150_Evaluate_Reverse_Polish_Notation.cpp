class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int arg1;
        int arg2;

        for (int i = 0; i< tokens.size(); i++) {
            if ((isdigit(tokens[i][0])) || (tokens[i].size()>1)) {
                
                s.push(stoi(tokens[i]));
            }
            else {
                arg1 = s.top();
                s.pop();
                arg2 = s.top();
                s.pop();
                if (tokens[i] == "+") { s.push(arg1+arg2);} 
                else if ( tokens[i] == "-") {s.push(arg2-arg1);} 
                else if ( tokens[i] == "*") {s.push(arg1*arg2);}
                else  {s.push(arg2/arg1);}
            }
        }
        return s.top();
        
    }
};
