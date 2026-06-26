class Solution {
public:
    bool isValid(string s) {
        stack<int> l_stack;
        for(int i=s.size()-1;i>=0;i--)
        {
            char c=s[i];
            if(c=='}' || c==')' || c==']')
            {
                l_stack.push(c);
            }
            else
            {
                if(l_stack.empty()) return false;
                if(c=='{' && l_stack.top()!='}') return false;
                if(c=='(' && l_stack.top()!=')') return false;
                if(c=='[' && l_stack.top()!=']') return false;
                l_stack.pop();
            }
        }
        return l_stack.empty();
    }
};
