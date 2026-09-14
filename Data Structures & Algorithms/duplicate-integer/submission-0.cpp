class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        std::unordered_set<int> temp;
        for(int i=0 ; i < nums.size() ; i++ )
        {
            temp.insert(nums[i]); 
        }

        return temp.size() != nums.size();
    }
};