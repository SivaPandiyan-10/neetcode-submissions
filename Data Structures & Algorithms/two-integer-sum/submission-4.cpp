class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> l_uMap;
        for(int i=0;i<nums.size();i++)
        {
            int l_rem=target-nums[i];
            if(l_uMap.contains(l_rem))
            {
                return {l_uMap[l_rem],i};
            }
            l_uMap[nums[i]]=i;
        }
        return {};      
    }
};
