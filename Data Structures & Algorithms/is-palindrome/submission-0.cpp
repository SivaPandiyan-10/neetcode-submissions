class Solution {
public:
    bool isPalindrome(string s) {
        string l_OG;
        string temp;
        stack<char> l_Stack;
        for(char c:s)
        {
            if(c!=' ' && (isalpha(c) || isdigit(c)))
            {
               c = tolower(c);
               l_OG.push_back(c);
               l_Stack.push(c);
            }
        }
        while(!l_Stack.empty())
        {
            temp.push_back(l_Stack.top());
            l_Stack.pop();
        }
        cout<<l_OG<<"::"<<temp;
        if(l_OG==temp) 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
