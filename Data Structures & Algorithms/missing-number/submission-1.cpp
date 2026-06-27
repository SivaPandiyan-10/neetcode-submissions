class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length=nums.size();
        unordered_set<int> l_uset;
        for(int i=0;i<=length;i++)
        {
             l_uset.insert(i);
        }
        for(int i=0;i<=length-1;i++)
        {
            if(l_uset.contains(nums[i]))
            {
                cout<<"Removed::"<<nums[i]<<endl;
                l_uset.erase(nums[i]);
            }
        }
        int num1=-1;
        for(int num: l_uset)
        {
            num1=num;
            return num1;
        }
        return num1;
    }
};
