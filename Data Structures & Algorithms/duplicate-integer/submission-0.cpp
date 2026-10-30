class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int current = nums[0];
        for(int i = 1; i<nums.size();i++){
            if(nums[i]==current) return true;
            current = nums[i];
        }
        return false;
    }
};