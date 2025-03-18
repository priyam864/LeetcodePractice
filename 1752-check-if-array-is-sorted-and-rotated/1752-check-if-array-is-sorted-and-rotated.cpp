class Solution {
public:
    bool check(vector<int>& nums) {
        int countDrops = 0;
        int n = nums.size();
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i-1]) {
                countDrops++;
            }
        }
        
        if (nums[n-1] > nums[0]) {
            countDrops++;
        }
        
        return countDrops <= 1;
    }
};
