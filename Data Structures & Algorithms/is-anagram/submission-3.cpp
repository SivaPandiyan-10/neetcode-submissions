class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char,int> l_uMap;
        for(char character : s)
        {
            if(l_uMap.contains(character))
            {
                l_uMap[character]+=1;
            }
            else
            {
                l_uMap[character]=1;
            }
        }
        for(char character : t)
        {
            if(l_uMap.contains(character))
            {
                l_uMap[character]-=1;
            }
            else
            {
               return false;
            }
        }
        for (auto it = l_uMap.begin(); it != l_uMap.end(); ++it) 
        {
            if(it->second>0) return false;
        }
        return true;
    }
};
