class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> temp;
        for(auto number : nums)
        {
            if(!temp.contains(number))
            {
               temp.insert(number);
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};